#include <bits/stdc++.h>
#define FALSE 0
#define TRUE !FALSE
#define A array
// 02
/*
void getSumDiff(int x, int y, int* p_sum, int* p_diff);
int main(void) {
	int sum, diff;
	getSumDiff(100, 200, &sum, &diff);
	printf("%d %d\n", sum, diff);
}
void getSumDiff(int x, int y, int* p_sum, int* p_diff) {
	*p_sum = x + y;
	*p_diff = abs(x - y);
}
*/
//03
/*
void printArray(int* A, int size);
void fillArrayWithRandNum(int* A, int size);
int main(void) {
	int* arr;
	arr = (int*)malloc(sizeof(int));
	int size = 10;
	srand((unsigned)time(NULL));
	fillArrayWithRandNum(arr, size);
	printArray(arr, size);
	free(arr);
}
void fillArrayWithRandNum(int* A, int size) {
	for (int i = 0; i < size; i++) {
		A[i] = rand();
	}
}
void printArray(int* A, int size) {
	printf("[ ");
	for (int i = 0; i < size; i++) {
		printf(i < size - 1 ? "%d, " : "%d ", A[i]);
	}
	printf("]\n");
}
*/
//04
/*
void printArray(int* A, int size);
int main(void) {
	int A[] = { 1, 2, 3, 4, 0, 0, 0, 0, 0, 0 };
	printArray(A, sizeof(A) / sizeof(A[0]));
}
void printArray(int* A, int size) {
	printf("A[] = { ");
	for (int i = 0; i < size; i++) {
		printf(i < size - 1 ? "%d, " : "%d ", A[i]);
	}
	printf("}\n");
}
*/
//05
void printArray(double* A, int size);
void convert(double* A, double *scores, int size);
double max_grade = 4.3;
int size = 10;
int main(void) {
	double grades[size] = { 0, };
	double scores[size] = { 0, };
	for (int i  = 0; i < size; i++) {
		grades[i] = i < size - 1 ? 0.0 + 0.5 * i : max_grade;
	}
	printArray(grades, sizeof(grades) / sizeof(grades[0]));
	convert(grades, scores, sizeof(grades) / sizeof(grades[0]));
	printArray(scores, sizeof(scores) / sizeof(scores[0]));
	
}
void convert(double* A, double *scores, int size) {
	for (int i = 0; i < size; i++) {
		scores[i] = (A[i] * 100.0) / 4.3; // 100 : 4.3 = x : A[i], 4.3 * x : A[i] * 100, x = (A[i] * 100) / 4.3
	}
}
void printArray(double* A, int size) {
	for (int i = 0; i < size; i++) {
		printf(A[i] < 10 ? "0%.2lf " : "%.2lf ", A[i]);
	}
	printf("\n");
}
