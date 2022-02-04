#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define PI 3.141592
#define TRUE 1
#define FALSE 0

//01
/*
int main(void){
	int days[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for (int i = 0; i < 12; i++) {
		printf("%d월은 %d일까지 있습니다.\n", i + 1, days[i]);
	}
}
*/
//02
/*
const int size = 10;
int main(void){
	int arr[size] = { 0, };
	int min = 999999999;
	srand((unsigned)time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand();
		min = min < arr[i] ? min : arr[i];
	}
	printf("%d\n", min);
}
*/
//03
/*
int arr_equal(int a[], int b[], int size);

const int size = 10;
int main(void) {
	int a[size] = { 0, };
	int b[size] = { 0, };
	for (int i = 0; i < size; i++) {
		scanf(" %d", &a[i]);
	}
	for (int i = 0; i < size; i++) {
		scanf(" %d", &b[i]);
	}
	arr_equal(a, b, size) == TRUE ? puts("2개의 배열은 같다") : puts("2개의 배열은 다르다");
}

int arr_equal(int a[], int b[], int size) {
	for (int i = 0; i < size; i++) {
		if (a[i] != b[i]) {
			break;
		}
		if (i == size - 1) {
			return TRUE;
		}
	}
	return FALSE;
}
*/
//04
/*
void arr_copy(int a[], int b[], int size);

const int size = 10;
int main(void) {
	int a[size] = { 0, };
	int b[size] = { 0, };
	for (int i = 0; i < size; i++) {
		scanf(" %d", &a[i]);
	}
	arr_copy(a, b, size);
	for (int i = 0; i < size; i++ ) {
		printf("%d ", b[i]);
	}
}

void arr_copy(int a[], int b[], int size) {
	for (int i = 0; i < size; i++) {
		b[i] = a[i];
	}
}
*/
