#include <stdio.h>

void count_up(int start_num, int end_num) {
	if (start_num < end_num) {
		for (start_num; start_num < end_num; start_num++) {
			printf("Number %d\n", start_num);
		}
	} else {
		printf("The start number must be lower than the end number...\n");
	}

	return;
}

void count_down(int start_num, int end_num) {
	if (start_num > end_num) {
		for (start_num; start_num > end_num; start_num--) {
			printf("Number %d\n", start_num);
		}
	} else {
		printf("The start number must be greater than the end number...\n");
	}
}

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

	printf("\n");

	printf("Now with functions...\n");


	printf("\n");

	printf("--Count Up--\n");
	count_up(5, 15);

	printf("\n");

	printf("--Count Down--\n");
	count_down(15, 5);
}
