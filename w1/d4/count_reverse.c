#include <stdio.h>

int main() {
	int a = 10;
	// Counting loop
	printf("--Counting--\n");
	for (int i = 0; i < 10; i++) {
		printf("Number %d\n", i);
	}

	printf("\n");

	printf("--Reverse--\n");
	while (a > 0) {
		printf("Reverse @ %d\n", a);
		a--;
	}
}
