#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define SIZE_OF_SEATING_ARR 10

typedef enum _StatusOfReservation { Open = 0, Closed, Selected } StatusOfReservation;
typedef enum { Individual = 1, Group } TypeOfReservation;

char get_input_char();
int get_input_integer();
int is_status_positive(char status);
void display_choice_input_message();
void print_horizontal_line();
void display_seat_table();
void display_choice_type_of_reservation_input_message();
TypeOfReservation choose_type_of_reservation();
void select_seat(TypeOfReservation type);
void display_seat_selection_input_message();
void display_seat_check_message();
void display_seat_reserved_message();

static int seats[SIZE_OF_SEATING_ARR] = {
    Open,
};
static int number_of_open_seats = SIZE_OF_SEATING_ARR;

int main(void) {
    char reservation_status;
    while (number_of_open_seats > 0) {
        display_choice_input_message();
        reservation_status = get_input_char();
        if (is_status_positive(reservation_status) == TRUE) {
            display_seat_table();
            display_choice_type_of_reservation_input_message();
            select_seat(choose_type_of_reservation());
        } else {
            break;
        }
    }
}

void display_number_of_reservations_input_message() { puts("Please enter number of reservations"); }
void display_seat_reserved_message() { puts("Seat successfully reserved."); }
void display_seat_check_message() { puts("Would you like to reserve this seat? (y or n)"); }
void display_seat_selection_input_message() { printf("Please select a open seat (1-%d)\n", SIZE_OF_SEATING_ARR); }
void select_seat(TypeOfReservation type) {
    int selection[SIZE_OF_SEATING_ARR] = { 0, };
    int is_checked;
    int number_of_reservations;
    while (TRUE) {
    	if(type ==  Individual){
    		number_of_reservations = 1;
		} else{
			if (number_of_open_seats < 2){
				return;
			}
			display_number_of_reservations_input_message();
       		number_of_reservations = get_input_integer();
       		if (!(number_of_reservations <= number_of_open_seats)) {
       			continue;
			}
		}
		display_seat_selection_input_message();
		for (int i = 0; i < number_of_reservations; i++) {
			selection[i] = get_input_integer();
			if (seats[selection[i] - 1] == Closed || seats[selection[i] - 1] == Selected) {
				i--;
            	continue;
            } else {
                	seats[selection[i] - 1] = Selected;
                	display_seat_table();
    	    }
		}
		display_seat_check_message();
		is_checked = get_input_char();
      	if (is_status_positive(is_checked) == TRUE) {
           	for (int i = 0; i < number_of_reservations; i++) {
           		seats[selection[i] - 1] = Closed;
            	number_of_open_seats--;
			}
            display_seat_table();
            display_seat_reserved_message();
            break;
        } else {
       		for (int i = 0; i < number_of_reservations; i++) {
       			seats[selection[i] - 1] = Open;
			}
           	display_seat_table();
           	continue;
        }
	}
}
TypeOfReservation choose_type_of_reservation() {
    TypeOfReservation type;
    printf(">> ");
    scanf("%d", &type);
    return type;
}
void display_choice_type_of_reservation_input_message() {
    puts("Please choose a type of reservation");
    puts("1. Individual");
    if (number_of_open_seats > 1){
    	puts("2. Group");
	} else{
		puts("2. Group reservation is not allowed.");
	}
}
void display_seat_table() {
    print_horizontal_line();
    for (int i = 0; i < SIZE_OF_SEATING_ARR; i++) {
        seats[i] == Open ? printf("%2d ", i + 1) : seats[i] == Selected ? printf(" # ") : printf(" X ");
    }
    putchar('\n');
    print_horizontal_line();
}
void print_horizontal_line() { puts("------------------------------"); }
void display_choice_input_message() { puts("Would you like to reserve a seat? (y or n)"); }
int is_status_positive(char status) { return status == 'y' || status == 'Y' ? TRUE : FALSE; }
int get_input_integer() {
    int n;
    printf(">> ");
    scanf("%d", &n);
    return n;
}
char get_input_char() {
    char ch;
    printf(">> ");
    scanf(" %c", &ch);
    return ch;
}
