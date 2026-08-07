#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
	// If we don't seed rand, we'll get the same numbers
	// every time we run the program

	// Seeds rand with current time (different always)
	unsigned int seed = (unsigned int)time(NULL);

	int random_number = (rand_r(&seed) % 100) + 1;
	int user_guess = random_number - 1;
	int lives = 10;
	bool won = false;

	printf("--Number Guessing Game--\n");

	while (lives != 0) {
		if (lives == 10) {
			printf("Guess a number from (1-100)\n");
			scanf("%d", &user_guess);
			lives--;
		}

		if (user_guess == random_number) {
			printf("YOU WIN!\n");
			won = true;
			break;
		}

		if (user_guess >= 1 && user_guess <= 100) {
			if (user_guess < random_number) {
				printf("You guessed too low\n");
			} else {
				printf("You guessed too high\n");
			}
		} else {
			printf("Number out of bounds...\n");
		}


		printf("Guess again\n");
		lives--;
		scanf("%d", &user_guess);
	}

	if (!won) {
		printf("You lost. The number was %d\n", random_number);
	}

	return 0;
}

