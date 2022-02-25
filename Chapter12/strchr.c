#include <stdio.h>
#include <string.h>
int main(void) {
	char s[] = "language";
	char c = 'g';
	char* p;
	int loc;
	p = strchr(s, c);
	loc = (int)(p - s);
	if (p != NULL) {
		printf("\"%s\"에서 첫번째 %c가 %d에서 발견됨\n", s, c, loc);
	} else {
		printf("%c가 발견되지 않음\n", c);
	}
}
