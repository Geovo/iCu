#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
	char *name;
	int age;
	int height;
	int weight;
};

void print_person(struct Person dude) {
  printf("Hi, my name is %s and I am %i years old. My height is %i and my weight is %i.\n", dude.name, dude.age, dude.height, dude.weight); 
}

int main(int argc, char *argv[])
{
	//make two people structures
	struct Person joe = {"Joe Alex", 32, 64, 140};
		
	struct Person frank = {"Frank Blank", 20, 72, 180};
		
	//print them out and where they are in memory
	printf("Joe is at memory location: %p\n", &joe);
	print_person(joe);
	
	printf("Frank is at memory location: %p\n", &frank);
	print_person(frank);
	
	
	return 0;
}
