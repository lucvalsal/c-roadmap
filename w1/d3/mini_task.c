#include <stdio.h>

int main() {
	int age;

	printf("How old are you?\n");
	scanf(" %d", &age);

	if (age >= 0 && age < 18) {
		switch (age) {
			case 0:
				printf("Jesus how are you writing this?\n");
				break;
			case 1:
				printf("I still can't believe this...\n");
				break;
			case 2:
				printf("Maybe? Still, what...\n");
				break;
			case 3:
				printf("Yeah... how the heck?\n");
				break;
			case 4:
				printf("Hmmm... kinda makes sense\n");
				break;
			case 5:
				printf("Prodigy, huh?\n");
				break;
			case 6 ... 15:
				printf("Good for you mate\n");
				break;
			default:
				printf("Cool broddy.\n");
		}
		printf("You are a minor.\n");
	} else if (age >= 18 && age < 59) {
		printf("You are an adult.\n");
	} else if (age >= 59) {
		printf("You are an elder.\n");
	} else {
		printf("I have no clue what you are...\n");
	}

	return 0;
}
