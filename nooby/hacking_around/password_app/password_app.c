#include <stdio.h>
#include <curses.h>

char pw[25], ch;
int i;

int main() {
//	clrscr();
	puts("Enter password:");
	while(1) {
		if (i < 0)
			i = 0;
		
		if (ch == 13)
			break; /* 13 is the ASCII value of ENTER */

		if (ch == 8) {
			printf("%c", '\b');
			printf(NULL);
			printf("%c", '\b');
			--i;
			continue;
		}

		pw[i++] = ch;
		ch = '*';
		printf("%c", ch);

		return 0;
	}

	pw[i] = '\0';
	printf("\n\n%s", pw);
	getch();
}
