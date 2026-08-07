#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

void display() {
	printf("Hello World!\n");
}

void greet(char* name) {
	printf("Hello %s", name);
}

int main() {
	char name[32];
	int sum = add(5, 10);
	printf("Sum = %d\n", sum);

	display();

	printf("What's your name?\n");
	scanf("%s", name);

	greet(name);

	return 0;
}
