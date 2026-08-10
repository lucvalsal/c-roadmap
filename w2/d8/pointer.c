#include <stdio.h>

int main() {
	int var = 10;

	int *ptr = &var;


	// This will print the memory address in which 'var'
	// is stored at
	printf("%p\n", ptr);

	// To 'dereference the pointer (access the value at the address)'
	printf("%d", *ptr);  // * dereferences the pointer

	return 0;
}
