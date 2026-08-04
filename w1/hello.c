#include <stdio.h>
#include <time.h>

int main() {
	time_t seconds = time(NULL);
	struct tm* current_time = localtime(&seconds);

	int current_year;

	char salute[] = "This is the salute.";

	current_year = current_time->tm_year + 1900;

	printf("Hello everyone.\n");
  printf("My current age is %d.\n", (current_year - 1999));
	printf("The character is: %c.\n", 'C');
	printf("This is the string: %s\n", salute);

	return 0;
}
