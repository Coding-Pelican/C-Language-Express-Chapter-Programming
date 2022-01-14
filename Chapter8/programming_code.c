#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define PI 3.141592
#define TRUE 1
#define FALSE 0
//01
/*
double get_double();
double square(double n);
int main(void){
	double x = get_double();
	printf("%lf", square(x));
}
double square(double n){
	return n * n;
}
double get_double(){
	double n;
	printf(">> ");
	scanf("%lf", &n);
	return n;
}
*/
//02
/*
int check_alphabet(int ch);
int main(void){
	char sample = getchar();
	printf("%c ", sample);
	check_alphabet((int)sample) ? puts("is alphabet.") : puts("is not alphabet.");
}
int check_alphabet(int ch){
	return ch >= 65 && ch <= 122 ? 1 : 0;
}
*/
//03
/*
double get_double();
double cal_area(double radius);
int main(void){
	printf("%lf", cal_area(get_double()));
}
double cal_area(double radius){
	return PI * radius * radius;
}
double get_double(){
	double n;
	printf(">> ");
	scanf("%lf", &n);
	return n;
}
*/
//04
/*
int get_integer();
int is_leap(int year);
int main(void){
	printf("%d", 365 + is_leap(get_integer()));
}
int is_leap(int year){
	return (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0) ? 1 : 0;
}
int get_integer(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	return n;
}
*/
//05
/*
double get_double();
double round(double n);
int main(void){
	printf("%lf", round(get_double()));
}
double round(double n){
	return (int)(n + 0.5);
}
double get_double(){
	double n;
	printf(">> ");
	scanf("%lf", &n);
	return n;
}
*/
//06
/*
int get_integer();
int sign(int n);
int abs(int n);
int even(int n);
int main(void){
	int n =  get_integer();
	even(n) == 1 ? puts("짝수") : puts("홀수");
	printf("%d\n", abs(n));
	sign(n) == 1 ? puts("양수") : sign(n) == -1 ? puts("음수") : puts("0");
}
int even(int n){
	return n % 2 == 0 ? 1 : 0; 
}
int abs(int n){
	return n < 0 ? n * -1 : n;
}
int sign(int n){
	return n > 0 ? 1 : n < 0 ? -1 : 0; 
}
int get_integer(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	return n;
}
*/
//07
/*
int get_integer();
int get_tax(int income);
int main(void){
	printf("%d", get_tax(get_integer()));
}
int get_tax(int income){
	return income <= 1000 ? income * 0.08 : (income - 1000) * 0.1 + 80;
}
int get_integer(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	return n;
}
*/
//08
/*
double get_double();
double sin_degree(double degree);
int main(void){
	for (int i = 0; i < 19; i++){
		printf("%lf\n", sin((i * PI) / 18.0));
	}
	printf("%lf\n", sin_degree(get_double()));
}
double sin_degree(double degree){
	return sin((degree * PI) / 180.0);
}
double get_double(){
	double n;
	printf(">> ");
	scanf("%lf", &n);
	return n;
}
*/
//09
/*
int get_integer();
void b_rand(int n);
int main(void){
	srand((unsigned)time(NULL));
	b_rand(get_integer());
}
void b_rand(int n){
	for (int i = 0; i < n; i++){
		printf("%d ", rand() % 2);
	}
} 
int get_integer(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	return n;
}
*/
/*
//10
int get_integer();
char get_char();
int b_rand();
void init_rand();
void display_selection();
int is_selection_correct(int selection, int state);
void print_validation_message(int state);
void print_proceed_confirmation_message();
int is_continue(char state);
int main(void){
	int choice, coin; 
	char choice_proceed;
	init_rand(); 
	while(TRUE){
		display_selection();
		choice = get_integer();
		coin = b_rand();
		print_validation_message(is_selection_correct(choice, coin));
		print_proceed_confirmation_message();
		choice_proceed = get_char();
		if (is_continue(choice_proceed) == TRUE){
			continue;	
		} else{
			break;
		}
	}
}
int is_continue(char state){
	state == 'y' || state == 'Y' ? 1 : 0;
}
void print_proceed_confirmation_message(){
	puts("계속하시겠습니까? (y/n)");
}
void print_validation_message(int state){
	state == 1 ? puts("맞았습니다") : puts("틀렸습니다"); 
}
int is_selection_correct(int selection, int state){
	return selection == state ? 1 : 0;
}
void display_selection(){
	puts("앞면(1) or 뒷면(0)");
}
void init_rand(){
	srand((unsigned)time(NULL));
}
int b_rand(){
	return rand() % 2;
}
char get_char(){
	char ch;
	printf(">> ");
	scanf(" %c", &ch);
	return ch;
}
int get_integer(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	return n;
}
*/
//11
/*
double f_rand();
int main(void){
	printf("%lf ", f_rand());
	printf("%lf ", f_rand());
	printf("%lf ", f_rand());
	printf("%lf ", f_rand());
	printf("%lf ", f_rand());
}
double f_rand(){
	return rand()/(double)RAND_MAX;
}
*/
//12
/*
int get_integer();
void print_value(int n);
void display_input_message();
int main(void){
	int n;
	do{
		display_input_message();
		n = get_integer();
		print_value(n);
	} while(n > -1);
}
void display_input_message(){
	puts("값을 입력하시오(종료 -1)");
}
void print_value(int n){
	for(int i = 0; i < n; i++){
		printf("*");
	}
	putchar('\n');
}
int get_integer(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	return n;
}
*/
//13
/*
int get_integer();
int is_mutiple(int n, int m);
int main(void){
	int n, m;
	n = get_integer();
	m = get_integer();
	printf("%d is ", n);
	is_mutiple(n, m) == 1 ? printf("a multiple of %d.", m) : printf("not a multiple of %d.", m);
}
int is_mutiple(int n, int m){
	return n % m == 0 ? 1 : 0;
}
int get_integer(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	return n;
}
*/
//14
/*
double distance(double x1, double y1, double x2, double y2);
int main(void){
	double pos_x[2] = { 0, };
	double pos_y[2] = { 0, };
	for (int i = 0; i < 2; i++){
		printf(">> ");
		scanf("%lf %lf", &pos_x[i], &pos_y[i]);
	}
	printf("%lf", distance(pos_x[0], pos_y[0], pos_x[1], pos_y[1]));
}
double distance(double x1, double y1, double x2, double y2){
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}
*/
//15
/*
int is_prime(int _n);
int main(void){
	for(int i = 0; i < 100; i++){
		is_prime(i + 1) == TRUE ? printf("%d ", i + 1) : NULL;
	}
}
int is_prime(int _n){
	for (int i = 2; i < _n; i++){
		if (_n % i == 0){
			return FALSE;
		}
	}
	return TRUE;
}
*/
//16
/*
int get_integer();
long long factorial(long long _n);
int main(void){
	int n = get_integer();
	double result = 1;
	for(int i = 0; i < n; i++){
		result += 1 / (double)factorial(i + 1);
	}
	printf("%lf", result);
}
long long factorial(long long _n){
	return _n == 1 ? 1 : _n * factorial(_n - 1);
}
int get_integer(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	return n;
}
*/
//17
/*
const double e = 0.000001;
double get_double();
double f_equal(double a, double b);
double f_abs(double x);
double f_min(double x, double y);
int main(void){
	double x = get_double();
	double y = get_double();
	f_equal(x, y) == TRUE ? puts("두 개의 실수는 서로 같음") : puts("두 개의 실수는 서로 다름");
}
double f_min(double x, double y){
	return x < y ? x : y;
}
double f_abs(double x){
	return x < 0 ? x * -1 : x;
}
double f_equal(double a, double b){
	return (f_abs(a - b) / f_min(f_abs(a), f_abs(b))) < e ? TRUE : FALSE;
}
double get_double(){
	double n;
	printf(">> ");
	scanf("%lf", &n);
	return n;
}
*/
//18
/*
int get_integer();
double get_double();
char get_char();
double add(double _x, double _y);
double sub(double _x, double _y);
double mul(double _x, double _y);
double div(double _x, double _y);
int mod(int _x, int _y);
void display_menu();
void print_horizontal_line();
void display_input_message();
void print_proceed_confirmation_message();
int is_continue(char state);

int main(void){
	int selected_menu = 0;
	char choice_proceed;
	double x, y;
	while(TRUE){
		display_menu();
		display_input_message();
		selected_menu = get_integer();
		x = get_double();
		y = get_double();
		switch(selected_menu){
			case 1 :
				printf("%lf\n", add(x, y));
				break;
			case 2 :
				printf("%lf\n", sub(x, y));
				break;
			case 3 :
				printf("%lf\n", mul(x, y));
				break;
			case 4 :
				printf("%lf\n", div(x, y));
				break;
			case 5 :
				printf("%d\n", mod((int)x, (int)y));
				break;
			default :
				break;
		}
		print_proceed_confirmation_message();
		choice_proceed = get_char();
		if(is_continue(choice_proceed) == TRUE){
			continue;	
		} else{
			break;
		}
	}
}

int is_continue(char state){
	return state == 'y' || state == 'Y' ? TRUE : FALSE;
}

void print_proceed_confirmation_message(){
	puts("계속하려면 y를 누르시오");
}

void display_input_message(){
	puts("원하는 메뉴를 선택하시오(1-5)");
}

void print_horizontal_line(){
	puts("=============================");
}

void display_menu(){
	print_horizontal_line();
	puts("MENU");
	print_horizontal_line();
	puts("1. 덧셈");
	puts("2. 뺄셈");
	puts("3. 곱셈");
	puts("4. 나눗셈");
	puts("5. 나머지");
}

int mod(int _x, int _y){
	return _x % _y;
}

double div(double _x, double _y){
	return _x / _y;
}

double mul(double _x, double _y){
	return _x * _y;
}

double sub(double _x, double _y){
	return _x - _y;
}

double add(double _x, double _y){
	return _x + _y;
}

char get_char(){
	char ch;
	printf(">> ");
	scanf(" %c", &ch);
	return ch;
}

double get_double(){
	double n;
	printf(">> ");
	scanf("%lf", &n);
	return n;
}

int get_integer(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	return n;
}
*/
