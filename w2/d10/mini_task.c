#include<stdio.h>

void strcopy(char* source, char* destination, int limit) {
	for (int i = 0; i < limit; i++) {
		*(destination + i) = source[i];

		if (source[i] == '\0') {
			break;
		}

		destination[limit - 1] = '\0';
	}
}

int strlength(char* str) {
	int len = 0;
	for (int i = 0 ; str[i] != '\0'; i++) {
		len++;
	}

	return len;
}

int main() {
	char str1[16] = "Hi, hello...";
	char str2[16];
	int len_str1 = strlength(str1);

	printf("--strlength--\n%d\n", len_str1);
	printf("--strcopy--\nstr1 to str2\n");
	printf("str1: %s\nstr2: %s\n", str1, str2);
	strcopy(str1, str2, 12);
	printf("str1: %s\nstr2: %s\n", str1, str2);

	return 0;
}
