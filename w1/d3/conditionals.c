#include <stdio.h>

int main() {
	int a, b, diff;

	printf("Input a number for 'a': ");
	scanf("%d", &a);

	printf("Input a number for 'b': ");
	scanf("%d", &b);

	if (a < b) {
		diff = b - a;
		printf("%d is less than %d by %d.\n", a, b, diff);
	} else if (a > b) {
		diff = a - b;
		printf("%d is greater than %d by %d.\n", a, b, diff);
	} else {
		diff = 0;
		printf("I don't know what is going on...");
	}

	switch (diff) {
		case 0:
			printf("And I still don't know what is going on...\n");
			break;
		case 1:
			printf("A humble difference...\n");
			break;
		case 2:
			printf("2 numbers apart, I see...\n");
			break;
		case 3:
			printf("By 3, cool...\n");
		case 4:
			printf("It's quite the distance already...\n");
		default:
			printf("The difference is 5 or greater...\n");
	}

	return 0;
}
