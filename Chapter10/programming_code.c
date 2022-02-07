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
//05
/*
void display_arr(int a[], int size, int idx);
int main(void) {
	int arr[10] = { 0, };
	int min = 0;
	int random;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 100; i++) {
		random = rand() % 10;
		arr[random]++;
		min = arr[min] > arr[random] ? random : min;
		display_arr(arr, 10, i);
	}
	printf("minimum is %d", min);
}
void display_arr(int a[], int size, int idx) {
	printf("%d--------------------\n", idx);
	for (int i = 0; i < size; i++) {
		printf("%d : %d\n", i, a[i]);
	}
}
*/
//06
/*
void display_arr_of_2D(int a[5][3], int x_size, int y_size);
int main(void) {
	int sum_of_col = 0, sum_of_row = 0;
	int arr_of_2D[5][3] = {
	{12, 99, 65}, 
	{56, 56, 3}, 
	{32, 34, 87}, 
	{16, 41, 78}, 
	{98, 3, 21}
	};
	
	display_arr_of_2D(arr_of_2D, 5, 3);
	
	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 5; col++) {
			sum_of_col += arr_of_2D[col][row];
		}
		printf("sum of col : %d\n", sum_of_col);
		sum_of_col = 0;
	}
	for (int col = 0; col < 5; col++) {
		for (int row = 0; row < 3; row++) {
			sum_of_row += arr_of_2D[col][row];
		}
		printf("sum of row : %d\n", sum_of_row);
		sum_of_row = 0;
	}
}
void display_arr_of_2D(int a[5][3], int x_size, int y_size) {
	for (int y = 0; y < y_size; y++) {
		for (int x = 0; x < x_size; x++) {
			printf("%2d ", a[x][y]);
		}
		printf("\n");
	}
}
*/
//07
void display_arr_of_2D(int a[3][10], int x_size, int y_size);
int main(void) {
	int table[3][10] = { 0, };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			table[i][j] = i + 1 == 1 ? j + 1 : (j + 1) * table[i - 1][j];  
		}
	}
	display_arr_of_2D(table, 3, 10);
}
void display_arr_of_2D(int a[3][10], int x_size, int y_size) {
	for (int y = 0; y < y_size; y++) {
		for (int x = 0; x < x_size; x++) {
			printf("%4d ", a[x][y]);
		}
		printf("\n");
	}
}
