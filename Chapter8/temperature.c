//temperature
#include<stdio.h>

char print_option();
char input_option();
double input_temp(int type);
double ctof(double c_temp);
double ftoc(double t_temp);

int main(void){
	char choice;
	do{
		choice = print_option();
		switch(choice){
			case 'c':
			case 'C':
				printf("%lf\n", input_temp(0));
				break;
			case 'f':
			case 'F':
				printf("%lf\n", input_temp(1));
				break;
			default:
				puts("Error");
				break;
		}
	}while(!(choice == 'q' || choice == 'Q'));
}

char input_option(){
	printf(">> ");
	return getchar(); 
}

char print_option(){
	puts("'c' 섭씨 -> 화씨");
	puts("'f' 화씨 -> 섭씨");
	puts("'q' 종료");  
	return input_option();
}

double ctof(double c_temp){
	return 9.0 / 5.0 * c_temp + 32;
}

double ftoc(double f_temp){
	return (f_temp - 32.0) * 5.0 / 9.0;
}

double input_temp(int type){
	double temp;
	printf(">> ");
	scanf("%lf", &temp);
	return type == 0 ? ctof(temp) : type == 1 ? ftoc(temp) : NULL;
}
