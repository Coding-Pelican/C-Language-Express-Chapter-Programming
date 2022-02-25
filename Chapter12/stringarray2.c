#include <stdio.h>
int main(void) {
	char fruits[3][20];
	for (int i = 0; i < 3; i++) {
		scanf("%s", fruits[i]);
	}
	for (int i = 0; i < 3; i++) {
		printf("%s\n", fruits[i]);
	}
}
