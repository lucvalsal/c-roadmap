// Mini Task: Write a program that prints your name,
// age, and favorite programming language.

#include <stdio.h>
#include <time.h>

int get_age(int year_born) {
	time_t seconds = time(NULL);
	struct tm* current_time = localtime(&seconds);

	int current_year = current_time->tm_year + 1900;

	return current_year - year_born;
}

int main() {
	char name[64];
	int year_born;
	char fav_lang[64];
	int age;

	printf("What is your name?\n");
	scanf(" %s", name);
	printf("What year were you born?\n");
	scanf(" %d", &year_born);
	printf("What is your favorite programming language?\n");
	scanf(" %s", fav_lang);

	age = get_age(year_born);

	printf("Your name is %s.\n", name);
	printf("You're %d years old.\n", age);
	printf("Your favorite programming language is %s.\n", fav_lang);

	return 0;
}


