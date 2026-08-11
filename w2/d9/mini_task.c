#include <stdio.h>

#define N 8

int main() {
	float array[N];
	float input;
	float sum = 0.0;
	float avg;

	for (int i = 0; i < N; i++) {
		scanf(" %f", &input);
		*(array + i) = input;
	}

	for (int i = 0; i < N; i++) {
		sum +=  array[i];
	}

	avg = sum / N;

	printf("The average of the float array is %f\n", avg);

	return 0;
}
