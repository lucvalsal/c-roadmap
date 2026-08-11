#include <stdio.h>

int main() {
	int var = 10;

	// We must use '*' to declare that the variable 'ptr'
	// is going to store a memory address
	// an int is only 4 bytes, whereas a memory address
	// is 8 bytes
	int* ptr = &var;

	// This will print the memory address in which 'var'
	// is stored at
	printf("%p\n", ptr);

	// To 'dereference the pointer (access the value at the address)'
	printf("%d\n", *ptr);  // * dereferences the pointer

	// Another way to access the memory address of 'var'
	printf("%p\n", &var);

	return 0;
}
