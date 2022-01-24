#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

//01
/*
double add(double _x, double _y);
double sub(double _x, double _y);
double mul(double _x, double _y);
double div(double _x, double _y);
double check_operator(double x, char op, double y);
void enter_operation();
void display_input_message();
void display_count_of_enter_operator_calls();
static int n_add = 0, n_sub = 0, n_mul = 0, n_div = 0;
int main(void){
	while(TRUE){
		display_input_message();
		enter_operation();
		display_count_of_enter_operator_calls();
	}
}
void display_count_of_enter_operator_calls(){
	if(n_add > 0){
		printf("덧셈 %d\n", n_add);
	}
	if(n_sub > 0){
		printf("뺄셈 %d\n", n_sub);
	}
	if(n_mul > 0){
		printf("곱셈 %d\n", n_mul);
	}
	if(n_div > 0){
		printf("나눗셈 %d\n", n_div);
	}
}
void display_input_message(){
	printf("연산을 입력하시오.\n>> ");
}
void enter_operation(){
	double x, y;
	char op;
	scanf("%lf%c%lf", &x, &op, &y);
	printf("%d\n", (int)(check_operator(x, op, y)));
}
double check_operator(double x, char op, double y){
	if(op == '+'){
		return add(x, y);	
	} else if(op == '-'){
		return sub(x, y);	
	} else if(op == '*'){
		return mul(x, y);	
	} else if(op == '/'){
		return div(x, y);	
	} else{
		return NULL;
	}
}
double div(double _x, double _y){
	n_div++;
	return _x / _y;
}
double mul(double _x, double _y){
	n_mul++;
	return _x * _y;
}
double sub(double _x, double _y){
	n_sub++;
	return _x - _y;
}
double add(double _x, double _y){
	n_add++;
	return _x + _y;
}
*/
//02
/*
void count_dice_face(int face);
int get_dice_face();
int max_cnt;
int main(void){
	srand((unsigned)time(NULL));
	max_cnt = 10;
	for (int i = 0; i < max_cnt; i++){
		count_dice_face(get_dice_face());
	}
}
int get_dice_face(){
	return rand() % 6 + 1;
}
void count_dice_face(int face){
	static int face_cnt[6] = {0, };
	static int cnt = 0;
	cnt++;
	face_cnt[face - 1]++;
	printf("%d회 시행\n", cnt);
	if(cnt == max_cnt){
		cnt = 0;
		for(int i = 0; i < 6; i++){
			printf("%d -> %d\n", i + 1, face_cnt[i]);
			face_cnt[i] = 0;
		}
	}
}
*/
//03
/*
int check(int value_of_input);
int input_password();
const int max_number_of_verify = 3;
const int password = 1234;
int main(void){
	while(TRUE){
		if(check(input_password()) == FALSE){
			continue;
		} else{
			break;
		}
	}
}
int input_password(){
	static int value_of_input = 1000; //int value_of_input;
	printf("Password : ");
	printf("%d\n", value_of_input++); //scanf("%d", &value_of_input);
	return value_of_input;
}
int check(int value_of_input){
	static int number_of_verify = 0;
	number_of_verify++;
	if(number_of_verify < max_number_of_verify){
		return value_of_input == password ? TRUE : FALSE;
	} else{
		puts("Login Attempts Exceeded");
		return TRUE;
	}
}
*/
//04
/*
void get_random();
int main(void){
	get_random();
	get_random();
	get_random();
	get_random();
}
void get_random(){
	static int isInited = FALSE;
	if(isInited == FALSE){
		isInited = TRUE;
		srand((unsigned)time(NULL));
		puts("Procced initialization");
	} else{
		printf("%d\n", rand());
	}  
}
*/
//05
/*
int sum(int n);
int get_integer();
int main(void){
	printf("%d\n", sum(get_integer()));
}
int get_integer(){
	int n;
	printf("Enter an Integer : ");
	printf("%d\n", n = 10); //scanf("%d", &n);
	return n;
}
int sum(int n){
	return n == 1 ? 1 : n + sum(n - 1);
}
*/
//06
/*
int power(int base, int power_raised);
int get_integer(int value);
int main(void){
	int base, exponent;
	printf("Enter an base : ");
	base = get_integer(2);
	printf("Enter an exponent : ");
	exponent = get_integer(10);
	printf("%d\n", power(base, exponent));
}
int get_integer(int value){ //parameter is void
	int n;
	printf("%d\n", n = value); //scanf("%d", &n);
	return n;
}
int power(int base, int power_raised){
	return power_raised == 1 ? base : base * power(base, power_raised - 1);
}
*/
//07
/*
int get_integer(int value);
int show_digit(int x);
int main(void){
	show_digit(get_integer(1234));
}
int show_digit(int x){
	if(x > 0){
		show_digit(x / 10);
		printf("%d ", x % 10);
	}
}
int get_integer(int value){ //parameter is void
	int n;
	printf("%d\n", n = value); //scanf("%d", &n);
	return n;
}
*/
//08
/*
int get_integer(int value);
int count_number_of_digit(int n);
int main(void){
	printf("%d\n", count_number_of_digit(get_integer(54321)));
}
int count_number_of_digit(int n){
	static int cnt = 0;
	if(n > 0){
		count_number_of_digit(n / 10);
		cnt++;
	}
	return cnt;
}
int get_integer(int value){ //parameter is void
	int n;
	printf("%d\n", n = value); //scanf("%d", &n);
	return n;
}
*/
//09
/*
int get_integer(int value);
int sum_digits(int x);
int main(void){
	printf("%d\n", sum_digits(get_integer(123)));
}
int sum_digits(int x){
	static int sum = 0;
	if(x > 0){
		sum_digits(x / 10);
		sum += x % 10;
	}
	return sum;
}
int get_integer(int value){ //parameter is void
	int n;
	printf("%d\n", n = value); //scanf("%d", &n);
	return n;
}*/
//10
/*
double get_double(int value);
double recursive(double n);
int main(void){
	printf("%lf\n", recursive(get_double(10)));
}
double recursive(double n){
	return n == 1 ? n : 1.0 / n + recursive(n - 1)s;
}
double get_double(int value){ //parameter is void
	double n;
	printf("%lf\n", n = value); //scanf("%d", &n);
	return n;
}
*/
//11
/*
int get_integer(int value);
int recursive(int n, int k);
int main(void){
	int n, k;
	printf("n = ");
	n = get_integer(3);
	printf("k = ");
	k = get_integer(2);
	printf("%d\n", recursive(n, k));
}
int recursive(int n, int k){
	return k == 0 || k == n ? 1 : recursive(n - 1, k - 1) + recursive(n - 1, k);
}
int get_integer(int value){ //parameter is void
	int n;
	printf("%d\n", n = value); //scanf("%d", &n);
	return n;
}
*/
//12
/*
int get_integer(int value);
int fib(int n);
int main(void){
	printf("%d\n", fib(get_integer(9)));
}
int fib(int n){
	return n == 0 ? 0 : n == 1 ? 1 : fib(n - 2) + fib(n - 1);
}
int get_integer(int value){ //parameter is void
	int n;
	printf("%d\n", n = value); //scanf("%d", &n);
	return n;
}
*/
