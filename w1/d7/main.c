#include <stdio.h>
#include <stdbool.h>
#include "math_utils.h"


bool check_char(char ch) {
	if (ch == 'a' || ch == 's' || ch == 'm' || ch == 'd' || ch == 'q') {
		return true;
	}

	printf("Invalid input.\n");
	return false;
}

int main() {
	int res = 0;
	int a = 0;
	char operation;
	bool quit = false;

	printf("--Calculator--\n");
	printf("'a' = add, 's' = subtract, 'm' = multiply, ");
	printf("'d' = divide (Input 'q' to quit)\n");

	printf("\n");

	while (quit == false) {
		printf("Current Result: %d\n", res);
		printf("Input Operation: ");
		scanf(" %c", &operation);

		if (check_char(operation)) {
			switch (operation) {
				case 'a':
					printf("Number to add: ");
					scanf(" %d", &a);
					res = add(res, a);
					printf("\n");
					break;
				case 's':
					printf("Number to subtract: ");
					scanf(" %d", &a);
					res = subtract(res, a);
					printf("\n");
					break;
				case 'm':
					printf("Number to multiply: ");
					scanf(" %d", &a);
					res = multiply(res, a);
					printf("\n");
					break;
				case 'd':
					printf("Number to divide: ");
					scanf(" %d", &a);
					res = divide(res, a);
					printf("\n");
					break;
				case 'q':
					printf("Result: %d\n", res);
					quit = true;
					break;
				default:
					printf("Huh? Your result is %d\n", res);
					quit = true;
					break;
			}
		}
	}
}
