#include <stdio.h>

/* There are 3 looping statements in C: (for, while, do-while)
 * Entry Controlled: for, while
 * Exit Controlled: do-while */

// Entry controlled means that the condition is checked before the
// loop's body executes

// Exit controlled means that the condition is checked after
// executing the loop body

// Other loops could be 'Infinite Loops' where a condition
// is always true
// Nested loops, which is placing one loop inside the other

// Loop Control Statements (break, continue, goto) are used
// to change the execution of a loop from its normal sequence
// break terminates the loop
// continue skips the remaining body and jumps to the next iteration
// of the loop
// goto transfers control to the labeled statement

void loop_control() {
	// break
	printf("--break--\n");

	for (int i = 0; i < 5; i++) {
		if (i == 3) {
			break;
		}
		printf("%d ", i);
	}

	printf("\n");

	// continue
	printf("--continue--\n");
	for (int i = 0; i < 5; i++) {
		if (i == 3) {
			continue;
		}
		printf("%d ", i);
	}

	printf("\n");

	// goto
	printf("--goto--\n");
	for (int i = 0; i < 5; i++) {
		if (i == 3) {
			goto skip;
		}
		printf("%d ", i);
	}

	skip:
		printf("\nThis is the first time I've skipped.\n");
}

int main() {
	int a = 0;
	int b = 0;
	// for (initialization; condition; updation) {
	// 	// body of loop
	// }
	printf("--for--\n");
	for (int i = 0; i < 3; i++) {
		if (i == 2) {
			printf("Hi Loop");
			break;
		}
		printf("Hi Loop\n");
	}

	printf("\n");

	// while (condition)
	printf("--while--\n");
	while (a <= 5) {
		printf("%d ", a+ 1);

		a++;
	}

	printf("\n");

	// do-while
	printf("--do-while--\n");
	do {
		printf("%d ", b);

		b++;
	} while (b <= 10);

	printf("\n");

	loop_control();

	return 0;
}
