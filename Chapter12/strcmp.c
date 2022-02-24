#include <stdio.h>
#include <string.h>
int main(void) {
	char s1[80];
	char s2[80];
	int result;
	printf("first word: ");
	scanf("%s", s1);
	printf("second word: ");
	scanf("%s", s2);
	
	result = strcmp(s1, s2);
	if (result < 0) {
		printf("%s < %s\n", s1, s2);
	} else if (result == 0) {
		printf("%s = %s\n", s1, s2);
	} else {
		printf("%s > %s\n", s1, s2);
	}
} 
