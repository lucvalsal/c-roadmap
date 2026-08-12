#include <stdio.h>
#include <string.h>

/* For the examples I used the safe versions of strcpy and strcat, which are
 * strncpy strncat */

int main() {
	char str[] = "Lucas";
	char str2[32];
	int len = 0;

	char s1[] = "My name";
	char s2[] = "My name";

	char dest[20] = "Hello ";
	char src[] = "World";

	// strlen does not count the NULL character '\0'
	printf("Length of the string: %lu\n", strlen(str));

	// Counting chars with a for loop
	for (int i = 0; str[i] != '\0'; i++) {
		len++;
	}

	printf("Length of the string: %d\n", len);

	strncpy(str2, str, 5);

	printf("%s\n", str2);

	// strcmp returns 0 if strings are equal
	// and it returns a value (of the first non-matching char found) which:
	// if positive, arg1[i] > arg2[i]
	// if negative, arg1[i] < arg2[i]
	int res = strcmp(s1, s2);

	if (res == 0) {
		printf("Equal\n");
	} else {
		printf("Unequal\n");
	}

	// Concatenate src into destination
	strncat(dest, src, 5);

	printf("Concated string: %s\n", dest);

	return 0;
}
