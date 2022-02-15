#include <stdio.h>

void sub(int *b, int size);
int main(void) {
	int a[3] = { 1, 2, 3 };
	printf("a[0] = %d a[1] = %d a[2] = %d \n", a[0], a[1], a[2]);
	sub(a, 3);
	printf("a[0] = %d a[1] = %d a[2] = %d \n", a[0], a[1], a[2]);
}
void sub(int *b, int size) {
	for (int i = 0; i < size; i++) {
		b[i] += size;
	}
}
