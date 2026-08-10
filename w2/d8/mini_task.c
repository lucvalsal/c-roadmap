#include <stdio.h>

void swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	int a = 5;
	int b = 10;

	printf("a = %d, b = %d\n", a, b);

	printf("Switch integers using pointers...\n");

  swap(&a, &b);

	printf("a = %d, b = %d\n", a, b);
}
