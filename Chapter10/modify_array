#include <stdio.h>
#define SIZE 7

void modify_array(int a[], int size);
void print_array(int a[], int size);

int main(void) {
	int list[SIZE] = { 0, };
	for (int i = 0; i < 7; i++) {
		list[i] = i + 1;
	}
	print_array(list, SIZE);
	modify_array(list, SIZE);
	print_array(list, SIZE);
}
void modify_array(int a[], int size) {
	for (int i = 0; i < size; i++) {
		++a[i];
	}
}
void print_array(const int a[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%3d ", a[i]);
	}
	putchar('\n');
}
