#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define MAX_DATA 512
#define MAX_ROWS 150

//void Database_close(struct Connection *conn);

struct Address {
    int id;
    int set;
    char name[MAX_DATA];
    char email[MAX_DATA];
    int age;
    char hobbie[MAX_DATA];
};

struct Database {
    struct Address rows[MAX_ROWS];
};

struct Connection {
    FILE *file;
    struct Database *db;
};

void Database_close(struct Connection *conn);
void die(const char *message, struct Connection *conn)
{
    if(errno) {
        perror(message);
    } else {
        printf("ERROR: %s\n", message);
//	Database_delete(conn);
	Database_close(conn);
    }
    
    exit(1);
}

void Address_print(struct Address *addr)
{
    printf("%d %s %s %i %s\n", addr->id, addr->name, addr->email, addr->age, addr->hobbie);
}

void Database_load(struct Connection *conn)
{
    int rc = fread(conn->db, sizeof(struct Database), 1, conn->file);
    if (rc != 1) die("Failed to load database.", conn);
}


struct Connection *Database_open(const char *filename, char mode)
{
    struct Connection *conn = malloc(sizeof(struct Connection));
    if(!conn) die("Memory Error", conn);
    
    conn->db = malloc(sizeof(struct Database));
    if(!conn->db) die("Memory Error", conn);
    
    if(mode == 'c') {
        conn->file = fopen(filename, "w");
    } else {
        conn->file = fopen(filename, "r+");
        
        if(conn->file) {
            Database_load(conn);
        }
    }
    
    if(!conn->file) die("Failed to open the file", conn);
    
    return conn;
}

void Database_close(struct Connection *conn)
{
    if(conn) {
        if(conn->file) fclose(conn->file);
        if(conn->db) free(conn->db);
        free(conn);
    }
}

void Database_write(struct Connection *conn)
{
	rewind(conn->file);

	int rc = fwrite(conn->db, sizeof(struct Database), 1, conn->file);
	if(rc != 1) die("Failed to write database.", conn);

	rc = fflush(conn->file);
	if(rc == -1) die("Cannot flush database.", conn);
}

void Database_create(struct Connection *conn)
{
	int i = 0;

	for(i = 0; i < MAX_ROWS; i++) {
		//make a prototype to initialize it
		struct Address addr = {.id = i, .set = 0};
		// then just assign it
		conn->db->rows[i] = addr;
	}
}

void Database_set(struct Connection *conn, int id, const char *name, const char *email, int age, const char *hobbie)
{
	struct Address *addr = &conn->db->rows[id];
	if(addr->set) die("Already set, delete it first", conn);
	
	addr->age = age;	

	addr->set = 1;
	char *res = strncpy(addr->name, name, MAX_DATA);

	if(!res) die("Name copy failed", conn);

	res = strncpy(addr->email, email, MAX_DATA);
	if(!res) die("Email copy failed", conn);

	res = strncpy(addr->hobbie, hobbie, MAX_DATA);
	if(!res) die("Hobbie copy failed", conn);
}

void Database_get(struct Connection *conn, int id)
{
	struct Address *addr = &conn->db->rows[id];

	if(addr->set) {
		Address_print(addr);
	} else {
		die("ID is not set", conn);
	}
}

void Database_delete(struct Connection *conn, int id)
{
	struct Address addr = {.id = id, .set = 0}; 
	conn->db->rows[id] = addr;
}

void Database_list(struct Connection *conn)
{
	int i = 0;
	struct Database *db = conn->db;

	for(i = 0; i < MAX_ROWS; i++) {
		struct Address *cur = &db->rows[i];

		if(cur->set) {
			Address_print(cur);
		}
	}
}

void Database_find(struct Connection *conn, char *str)
{
	int i = 0;
	struct Database *db = conn->db;

	for(i = 0; i<MAX_ROWS; i++) {
		struct Address *pot = &db->rows[i];

		if(pot->set) {
			if (strstr(pot->name, str) || strstr(pot->email, str) || strstr(pot->hobbie, str))
				Address_print(pot);	
		}
	}	
}

int main(int argc, char *argv[])
{
	//if(argc < 3) die("USAGE: ex17 <dbfile> <action> [action params]", conn);

	char *filename = argv[1];
	char action = argv[2][0];
	struct Connection *conn = Database_open(filename, action);

	if(argc < 3) die("USAGE: ex17 <dbfile> <action> [action params]", conn);
	int id = 0;

	if(argc > 3) id = atoi(argv[3]);
	if(id >= MAX_ROWS) die("There's not that many records.", conn);

	switch(action) {
		case 'c':
		    Database_create(conn);
		    Database_write(conn);
		    break;

		case 'g':
		    if(argc != 4) die("Need an id to get", conn);

		    Database_get(conn, id);
		    break;

		case 's':
		    if(argc != 8) die("Need id, name, email, age and hobbie to set", conn);

		    Database_set(conn, id, argv[4], argv[5], atoi(argv[6]), argv[7]);
		    Database_write(conn);
		    break;

		case 'd':
		    if(argc != 4) die("Need id to delete", conn);

		    Database_delete(conn, id);
		    Database_write(conn);
		    break;

		case 'l':
		    Database_list(conn);
		    break;

		case 'f':
		    if(argc != 4) die("Need something to search for", conn);

		    Database_find(conn, argv[3]);
		    break;
		default:
		    die("Invalid action, only: c=create, g=get, s=set, d=del, l=list", conn);
	}

	Database_close(conn);
}













