#include <stdio.h>

/* The basic data types in C are  */
/* int, float, double, char, bool, and void */

void hi() {
	printf("Hi this is a greeting.\n");
}

int main() {
	int integer = -22;
	char character = 'A';
	float floating_point = 6.7;
	double double_num = 1.4521;

	printf("int: %d.\n", integer);
	printf("char: %c.\n", character);
	printf("float: %f.\n", floating_point);
	printf("double: %lf.\n", double_num);

	hi();

	return 0;
}
