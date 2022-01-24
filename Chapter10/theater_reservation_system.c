#include<stdio.h>
#define TRUE 1
#define FALSE 0

char input_char();
int is_status_positive(char status);
void display_input_message();
void display_seat_table();
int main(void){
	char reservation_status;
	while(TRUE){
		display_input_message();
		reservation_status = input_char();
		if(is_status_positive(reservation_status) == TRUE){
			display_seat_table();
		} else{
			break;
		}
	}
}
void display_seat_table(){
	
}
void display_input_message(){
	puts("Would you like to reserve a seat? (y or n)");
}
int is_status_positive(char status){
	return status == 'y' || status == 'Y' ? TRUE : FALSE;
}
char input_char(){
	char ch;
	printf(">> ");
	scanf(" %c", &ch);
	return ch;
}
