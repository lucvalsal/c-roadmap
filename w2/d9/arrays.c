#include <stdio.h>

int main() {
	int n;

	printf("What should be the length of the array?\n");
	scanf(" %d", &n);

	int numbers[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	int array[n];

	for (int i = 0; i < 8; i++) {
		printf("%p\n", &numbers[i]);
	}

	// This would print out something like the following
	// It won't be the same due to ASLR

	// 0x7ffd77a78230
	// 0x7ffd77a78234
	// 0x7ffd77a78238
	// 0x7ffd77a7823c
	// 0x7ffd77a78240
	// 0x7ffd77a78244
	// 0x7ffd77a78248
	// 0x7ffd77a7824c

	/* Memory Addresses are in Hexadecimal */
	/* An 'int' holds 4 bytes of space, thus */
	/* the increase by 4 */

	// Dereferencing pointers
	// i is multipled by 4, which is the
	// value in bytes on an integer
	for (int i = 0; i < 8; i++) {
		printf("%d\n", *(numbers + i));
	}

	for (int i = 0; i < n; i++) {
		*(array + i) = i + 1;
	}

	return 0;
}
