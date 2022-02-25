#include <stdio.h>
#include <string.h>
int main(void) {
	char s[] = "A joy that's shared is a joy made double";
	char sub[] = "joy";
	char* p;
	int loc;
	p = strstr(s, sub);
	loc = (int)(p - s);
	if (p != NULL) {
		printf("\"%s\"에서 첫번째 \"%s\"가 %d에서 발견됨\n", s, sub, loc);
	} else {
		printf("%s가 발견되지 않음\n", sub);
	}
}
