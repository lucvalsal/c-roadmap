#include<stdio.h>

int main() {
	int num;
	char name[32];

	char ch;

	char buff[100];

	// Use getchar to read a single character from stdin
	printf("Enter a character: ");
	ch = getchar();

	// Pointer is required
	printf("Input a random number\n");
	scanf(" %d", &num);

	// Pointer not required for array
	printf("Tell me your name\n");
	scanf(" %s", name);

	printf("\nYour number: %d\n", num);
	printf("Your name: %s\n", name);


	printf("Now I'll write your char to stdout\n");
	putchar(ch);

	/* gets was removed from C11 standard because it */
	/* can't protect against buffer overrun */

	// printf("\nEnter a string\n");
	// gets(buff);
	// printf("\nYou wrote\n");
	// printf("%s", buff);

	return 0;
}
