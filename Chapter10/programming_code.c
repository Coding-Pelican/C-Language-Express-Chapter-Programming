#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
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
/*
void display_arr_of_2D(int a[3][10], int x_size, int y_size);
int main(void) {
	int table[3][10] = { 0, };
	int x;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			table[i][j] = i + 1 == 1 ? j + 1 : (j + 1) * table[i - 1][j];  
		}
	}
	display_arr_of_2D(table, 3, 10);
	
	scanf("%d", &x);
	for (int i = 0; i < 10; i++) {
		if (table[2][i] == x) {
			printf("%d의 세제곱은 %d\n", x, table[0][i]);
			break;
		} else {
			if (i == 9) {
				puts("Not Found");
			}
		}
	}
}
void display_arr_of_2D(int a[3][10], int x_size, int y_size) {
	for (int y = 0; y < y_size; y++) {
		for (int x = 0; x < x_size; x++) {
			printf("%4d ", a[x][y]);
		}
		printf("\n");
	}
}
*/
//08 E(X), V(X), Sigma(X) 
/*
double expectation(double x[]);
double variation(double x[], double mean);
double sigma(double x);

const int size = 10;

int main(void){
	srand((unsigned)time(NULL));
	double arr_of_random[size] = { 0, };
	double x[size] = { 0, };
	for (int i = 0; i < size; i++) {
		arr_of_random[i] = (double)rand();
	}
	printf("E(arr_of_random) = %lf\n", expectation(arr_of_random));
	for (int i = 0; i < size; i++) {
		scanf(" %lf", &x[i]);
	}
	printf("mean is %lf\n", expectation(x));
	printf("SD is %lf\n", sigma(variation(x, expectation(x))));
}
double sigma(double x){
	return sqrt(x);
}
double variation(double x[], double mean){
	double variance = 0;
	for (int i = 0; i < size; i++) {
		variance += pow(x[i], 2);
	}
	return variance / size - pow(mean, 2);
}
double expectation(double x[]){
	double mean = 0;
	for (int i = 0; i < size; i++) {
		mean += x[i];
	}
	return mean / size;
}
*/
//09
/*
const int number_of_student = 10;
const int number_of_test = 3;
const int max_range_of_score = 100;
const int min_range_of_score = 0;
int main(void){
	int score[number_of_student][number_of_test] = { 0, };
	int max, min;
	srand((unsigned)time(NULL));
	for (int i = 0; i < number_of_student; i++) {
		for (int j = 0; j < number_of_test; j++) {
			score[i][j] = rand() % (max_range_of_score + 1);
		}
	}
	for (int i = 0; i < number_of_test; i++) {
		max = min_range_of_score;
		min = max_range_of_score;
		for (int j = 0; j < number_of_student; j++) {
			min = min < score[j][i] ? min : score[j][i];
			max = max > score[j][i] ? max : score[j][i];
 		}
 		printf("TEST #%02d Max Score is %d\n", i + 1, max);
 		printf("TEST #%02d Min Score is %d\n", i + 1, min);
	} 
}
*/
//10-(a)
/*
void vector_add(double x[], double y[], double z[], int size);

const int size = 3;

int main(void) {
	double x[size] = { 0, };
	double y[size] = { 0, };
	double z[size] = { 0, };
	
	for (int i = 0; i < size; i++) {
		x[i] = (double)(i + 1);
		y[i] = (double)(i + 1);
	}
	
	vector_add(x, y, z, size);
	
	printf("[ ");
	for (int i = 0; i < size; i++) {
		printf("%lf ", z[i]);
	}
	printf("]\n");
}

void vector_add(double x[], double y[], double z[], int size) {
	for (int i = 0; i < size; i++) {
		z[i] = x[i] + y[i];
	}
}
*/
//10-(b)
/*
double vector_dot_prod(double x[], double y[], int size);

const int size = 3;

int main(void) {
	double x[size] = { 0, };
	double y[size] = { 0, };
	double x_dot_y;
	
	for (int i = 0; i < size; i++) {
		x[i] = (double)(i + 1);
		y[i] = (double)(i + 1);
	}
	
	x_dot_y = vector_dot_prod(x, y, size);
	
	printf("%lf\n", x_dot_y); 
}

double vector_dot_prod(double x[], double y[], int size) {
	double temp = 0;
	for (int i = 0; i < size; i++) {
		temp += x[i] * y[i];
	}
	return temp;
}
*/
//11
/*
const int number_of_products = 10;
const int number_of_locations = 5; 
int main(void) {
	int n;
	int product_location[number_of_products] = { 0, };
	srand((unsigned)time(NULL));
	for (int i = 0; i < number_of_products; i++) {
		product_location[i] = rand() % number_of_locations + 1;
	}
	printf("\n");
	scanf("%d", &n);
	printf("%d : %d\n", n, product_location[n - 1]);
}
*/
//12-(a)
/*
const int size = 3;

void scalar_mult(int a[size][size], int scalar);

int main(void) {
	int matrix[size][size] = { 0, };
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			matrix[i][j] = (i * size) + (j + 1);
		}
	}
	scalar_mult(matrix, 2);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%2d ", matrix[i][j]);
		}
		printf("\n");
	}
}

void scalar_mult(int a[size][size], int scalar) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			a[i][j] *= scalar;
		}
	}
}
*/
//12-(b)
/*
const int size = 3;
void transpose(int a[size][size], int b[size][size], int size);
int main(void) {
	int target[size][size] = { 0, };
	int result[size][size] = { 0, };
	
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			target[i][j] = (i * size) + (j + 1);
		}
	}
	
	transpose(target, result, size);
	
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
}
void transpose(int a[size][size], int b[size][size], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			b[i][j] = a[j][i];
		}
	}
}
*/
//13
/*
const int max_length = 32;

void get_binary(int n, int binary[], int length);
void print_binary(int n, int binary[], int length);

int main(void) {
	int n;
	int binary[max_length] = { 0, };
	scanf("%d", &n);
	
	get_binary(n, binary, max_length);
	print_binary(n, binary, max_length);
}

void get_binary(int n, int binary[], int length) {
	for (int i = 0; i < length && n > 0; i++) {
		binary[i] = n % 2;
		n /= 2;
	}
}

void print_binary(int n, int binary[], int length) {
	int is_starting_point = FALSE;
	printf("%d->", n);
	for (int i = length; i > 0; i--) {
		if (!(binary[i - 1] == 0 || is_starting_point != FALSE)){
				is_starting_point = TRUE;
		}
			
		if (is_starting_point == TRUE) {
			printf("%d", binary[i - 1]);
		}
	}
	printf("\n");
}
*/
//14
/*
const int n = 20, m = 20, number_of_directions = 8;

void delay(clock_t n);
void print_map();
void clear_screen();
void set_random_spawn_pos();
int set_move_direction();
void move_to(int direction);

static int map[n][m] = { 0, };
int x = 0, y = 0;

int main(void) {
	srand((unsigned)time(NULL));
	set_random_spawn_pos();
	while(TRUE){
		print_map();
		delay(250);
		clear_screen();
		move_to(set_move_direction());
	}
}

void move_to(int direction) {
	switch(direction) {
		case 0 :
			x = x;
			y -= 1;
			break;
		case 1 :
			x += 1;
			y -= 1;
			break;
		case 2 :
			x += 1;
			y = y;
			break;
		case 3 :
			x += 1;
			y += 1;
			break;
		case 4 :
			x = x;
			y += 1;
			break;
		case 5 :
			x -= 1;
			y += 1;
			break;
		case 6 :
			x -= 1;
			y = y;
			break;
		case 7 :
			x -= 1;
			y -= 1;
			break;
		default :
			break;
	}
	map[x][y] = 1;
}

int set_move_direction() {
	return rand() % number_of_directions;
}

void set_random_spawn_pos() {
	x = rand() % n;
	y = rand() % m;
	map[x][y] = 1;
}

void clear_screen() { 
	system("cls");
}

void print_map() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			map[j][i] == 0 ? printf(". ") : printf("* ");
		}
		printf("\n");
	}
}

void delay(clock_t n) {
  clock_t start = clock();
  while(clock() - start < n);
}
*/
//15
/*
int main(void) {
	int map[10][10] = { 0, };
	int possibility = 30;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			map[j][i] = rand() % 100 < possibility ? 1 : 0;
		}
	}
	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			map[j][i] == 1 ? printf("# ") : printf(". ");
		}
		printf("\n");
	}
}
*/
