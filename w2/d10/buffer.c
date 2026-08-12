#include <stdio.h>
#include <string.h>

int main() {
	char s1[] = "Hello World!";

	char s2[5];

	char name[10] = "Lucas";

	int len_s1 = strlen(s1);

	// Printing memory address of s2
	for (int i = 0; i < (5); i++) {
		printf("s2 -> %p -> %c\n", (s2 + i), *(s2 + i));
	}

	// Printing memory address of name
	for (int i = 0; i < (10); i++) {
		printf("name -> %p -> %c\n", (name + i), *(name + i));
	}

	// Printing memory address of s1
	for (int i = 0; i < (len_s1); i++) {
		printf("s1 -> %p -> %c\n", (s1 + i), *(s1 + i));
	}

	// strcpy(destination, source)
	strcpy(s2, s1);

	printf("Dest: %s\n", s2);
	printf("Name: %s\n", name);

	// The above strcpy will cause buffer overflow
	// s2 is merely 5 bytes, and s1 is 13 bytes
	// 5 bytes from s1 get copied to s2
	// "Hello", leaving the rest of the bytes
	// which represent ' World!' with no option but
	// to overflow into the next buffer, which
	// happens to be where the string 'name' is
	// stored

	return 0;
}
