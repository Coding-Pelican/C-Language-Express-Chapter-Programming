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
// 03
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
// 04
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
// 05
/*
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
*/
// 06
/*
int size = 10;
void printArray(int* A, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}
void copyArray(int* A, int* B, int size) {
	for (int i = 0; i < size; i++) {
		B[i] = A[i];
	}
} 
int main(void) {
	int array_a[size] = { 1, 2, 3, 0, 0, 0, 0, 0, 0, 0 };
	int array_b[size] = { 0, };
	copyArray(array_a, array_b, size);
	printf("A[] = ");
	printArray(array_a, size);
	printf("B[] = ");
	printArray(array_b, size);
}
*/
// 07
/*
int size = 10;
void printArray(int* A, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}
void addArray(int* A, int* B, int* C, int size) {
	for (int i = 0; i < size; i++) {
		C[i] = A[i] + B[i];
	}
} 
int main(void) {
	int array_a[size] = { 1, 2, 3, 0, 0, 0, 0, 0, 0, 0 };
	int array_b[size] = { 0, };
	int array_c[size] = { 0, };
	addArray(array_a, array_b, array_c, size);
	printf("A[] = ");
	printArray(array_a, size);
	printf("B[] = ");
	printArray(array_b, size);
	printf("C[] = ");
	printArray(array_c, size);
}
*/
// 08
/*
int size = 10;
int sum_array(int* A, int size){
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += A[i];
	}
	return sum;
}
int main(void) {
	int array_a[size] = { 1, 2, 3, 0, 0, 0, 0, 0, 0, 0 };
	printf("Sum of A[] = %d", sum_array(array_a, size));
}
*/
// 09
/*
int size = 10;
int search(int* A, int size, int search_value) {
	for (int i = 0; i < size; i++) {
		if (i == search_value) return i;
	}
	puts("not found");
	return 999999999;
}
int main(void) {
	int array_a[size] = { 1, 2, 3, 0, 0, 0, 0, 0, 0, 0 };
	printf("월급이 200만원인 사람의 인덱스 = %d\n", search(array_a, size, 200));
}
*/
// 10
/*
void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd) {
	for(int i = 1; i < x; i++){
        *p_gcd = x % i == 0 && y % i == 0 ? i : *p_gcd;
    }
    *p_lcm = (x * y) / *p_gcd; 
}
int main(void) {
	int x, y, lcm, gcd;
	scanf("%d %d", &x, &y);
	get_lcm_gcd(x, y, &lcm, &gcd);
	printf("%d\n%d", lcm, gcd);
}
*/
// 11
int size = 4;
void printArray(int* A, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}
void merge(int* A, int* B, int* C, int size){
	int start = 0, middle = size, size * 2 - 1;
}
int main(void) {
	int array_a[size] = { 2, 5, 7, 8, };
	int array_b[size] = { 1, 3, 4, 6, };
	int array_c[size + size] = { 0, };
	merge(array_a, array_b, array_c, size);
	printf("A[] = ");
	printArray(array_a, size);
	printf("B[] = ");
	printArray(array_b, size);
	printf("C[] = ");
	printArray(array_c, size + size);
}
