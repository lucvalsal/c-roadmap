#include <stdio.h>
#include <stdbool.h>

int main() {
	int a = 10;
	int b = 5;

	bool a_is_greater;
	bool equality;

	/* Relational Operators (<, >, <=, >=, !=, ==) */

	// Equality
	if (a == b) {
		equality =  true;
		printf("a and b are equal.\n");
	}

	// Inequality
	if (a != b) {
		equality = false;
		printf("a and b are not equal, ");
		// Greater/Less than
		if (a > b) {
			a_is_greater = true;
			printf("because a is greater than b.\n");
		} else if (a < b) {
			a_is_greater = false;
			printf("because a is less than b.\n");
		} else {
			printf("because I don't know what just happened...\n");
		}
	}

	/* Logical Operators */

	if (equality) {
		printf("Yeah they are equal what do you want?\n");
	}

	// This right here can short-circuit, because if equality is false,
	// then it's not going to evaluate the following argument
	if (!equality && a_is_greater) {
		printf("They are not the same and a is greater!\n");
	}

	// This too can short-circuit
	if (equality || a == 5) {
		printf("This is a weird conditions but I don't know what else to write...\n");
	}


	return 0;
}
