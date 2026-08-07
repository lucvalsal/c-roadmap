#include <stdio.h>

int global_int = 5;  // This is a global scope var
										 // lifetime is the entire
										 // execution of the program

void hi() {
	char sentence[32] = "I like to eat!";  // This is a function scope var
										 									 	// life is initialization/declaration
										 									 	// until the function ends executing
	printf("Sentence: %s\n", sentence);
}

int main() {
	printf("This is the global int: %d\n", global_int);

	hi();

	for (int i = 0; i < 5; i++) {
		int a = 5;  // This is a block scope var
								// lifetime is this block
		printf("The loop is %d, and 'a' is %d\n", i, a - i);
	}

	return 0;
}
