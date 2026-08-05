#include <stdio.h>

int main(int argc, char **argv) {
	int d = 2;
	printf("Welcome to a program with a bug!\n");

  scanf("%d", d);  // fix with '&'

	printf("You gave me: %d", d);
	return 0;
}
