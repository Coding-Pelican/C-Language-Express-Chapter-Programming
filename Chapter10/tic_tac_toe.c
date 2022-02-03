//tic-tac-toe
#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef enum { NonePlayer, FirstPlayer, SecondPlayer } TypeOfPlayer;

int display_board(int board[3][3]);
void reset_board(int board[3][3]);
void display_position_selection_input_message(TypeOfPlayer current_player);
void select_position(TypeOfPlayer current_player);

static int board[3][3] = { //int board[3][3] = { 0, };	// 1 = 1p, 2 = 2p, 0 = NULL
	{ NonePlayer, NonePlayer, FirstPlayer },
	{ NonePlayer, FirstPlayer, SecondPlayer },
	{ SecondPlayer, NonePlayer, SecondPlayer }
	};
	
int main(void) {
	TypeOfPlayer current_player = FirstPlayer;
	reset_board(board);
	display_board(board);
	while(TRUE) {
		display_position_selection_input_message(current_player);
		select_position(current_player);
		display_board(board);
		current_player = current_player == FirstPlayer ? SecondPlayer : FirstPlayer; 
	}
}

void select_position(TypeOfPlayer current_player) {
	int is_checked = FALSE;
	int x, y;
	while(is_checked == FALSE){
		printf(">> ");
		scanf("%d %d", &x, &y);
		if (board[y][x] == NonePlayer) {
			board[y][x] = current_player;
			is_checked = TRUE;
		} else {
			is_checked = FALSE;
		}
	}	
}

void display_position_selection_input_message(TypeOfPlayer current_player) {
	current_player == FirstPlayer ? puts("enter 1p pos(x, y) ex) 0 0 ") : puts("enter 2p pos(x, y) ex) 0 0 ");
}

int display_board(int board[3][3]) { //(x : 1 3 5 7 && y : 1 3 5 7) 1 3 5 7 = +, 2 4 6 = - //
	puts("   0   1   2  ");
	for (int y = 0; y < 7; y++) {
		for (int x = 0; x < 7; x++) {
			if ((y + 1) % 2 == 1){
				if (x == 0){
					printf(" ");
				}
				if ((x + 1) % 2 == 1){
					printf("+");
				} else {
					printf("---");
				}
			} else {
				if (x == 0) {
					printf("%d", ((y + 1) / 2) - 1);
				}
				if ((x + 1) % 2 == 1){
					printf("|");
				} else {
					board[((y + 1) / 2) - 1][((x + 1) / 2) - 1] == FirstPlayer ? printf(" O ") : board[((y + 1) / 2) - 1][((x + 1) / 2) - 1] == SecondPlayer ? printf(" X ") : printf("   ");
				}
			}
		}
		printf("\n");
	}
}

void reset_board(int board[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			board[j][i] = NonePlayer;
		}
	}
}
