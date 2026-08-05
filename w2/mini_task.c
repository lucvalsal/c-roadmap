#include <stdio.h>

void greeting(char* full_name, int age) {
	printf("Hey %s!, hope you're doing awesome!\n", full_name);
	printf("I was told that you are %d years old... cool age!\n", age);
}

int main() {
	char full_name[100];
	int age;

	printf("Enter your full name\n");
	/* Reads everything from the next 99 chars up until */
	/* it gets a newline */
	scanf(" %99[^\n]", full_name);  // if I used '%s', writing spaces
																	// wouldn't be supported
	printf("Enter your age\n");
	scanf(" %d", &age);

	greeting(full_name, age);

	return 0;
}
