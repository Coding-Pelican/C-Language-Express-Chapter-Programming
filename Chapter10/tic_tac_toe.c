//tic-tac-toe
#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef enum { NonePlayer, FirstPlayer, SecondPlayer } TypeOfPlayer;

int display_board(int board[3][3]);
void reset_board(int board[3][3]);
void display_position_selection_input_message(TypeOfPlayer current_player);
void select_position(TypeOfPlayer current_player);
TypeOfPlayer check_winner(int board[3][3], TypeOfPlayer player);
void display_winner(TypeOfPlayer winner);

static int board[3][3] = { //int board[3][3] = { 0, };	// 1 = 1p, 2 = 2p, 0 = NULL
	{ NonePlayer, NonePlayer, FirstPlayer },
	{ NonePlayer, FirstPlayer, SecondPlayer },
	{ SecondPlayer, NonePlayer, SecondPlayer }
	};
	
int main(void) {
	TypeOfPlayer current_player = FirstPlayer;
	int is_gameover = FALSE;
	reset_board(board);
	display_board(board);
	while(is_gameover != TRUE) {
		display_position_selection_input_message(current_player);
		select_position(current_player);
		check_winner(board, current_player) == current_player ? is_gameover = TRUE : is_gameover = FALSE;
		display_board(board);
		if (is_gameover == TRUE) {
			continue;
		}
		current_player = current_player == FirstPlayer ? SecondPlayer : FirstPlayer;
	}
	display_winner(current_player);
}

void display_winner(TypeOfPlayer winner) {
	if (winner == FirstPlayer) {
		puts("Winner is 1p!"); 
	} else if (winner == SecondPlayer) {
		puts("Winner is 2p!"); 
	} else {
		puts("Draw");
	}
}

TypeOfPlayer check_winner(int board[3][3], TypeOfPlayer player){
	for (int i = 0 ; i < 3; i++) {	//가로줄 체크 
		for (int j = 0; j < 3; j++) {
			if (board[i][j] != player) {
				break;
			}
			if(j == 2) {
				return player;
			}
		}
	}
	
	for (int i = 0 ; i < 3; i++) {	//세로줄 체크 
		for (int j = 0; j < 3; j++) {
			if (board[j][i] != player) {
				break;
			}
			if(j == 2) {
				return player;
			}
		}
	}
	
	for (int i = 0 ; i < 3; i++) {	//좌상 - 우하 대각선 체크 
		if (board[i][i] != player) {
			break;
		}
		if(i == 2) {
			return player;
		}
	}
	
	for (int i = 0 ; i < 3; i++) {	//우상 - 좌하 대각선 체크 ex) (0, 2), (1, 1), (2, 0)
		if (board[i][2 - i] != player) {
			break;
		}
		if(i == 2) {
			return player;
		}
	}
	
	return NonePlayer;
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
					if(board[((y + 1) / 2) - 1][((x + 1) / 2) - 1] == FirstPlayer) {
						printf(" O ");
					} else if (board[((y + 1) / 2) - 1][((x + 1) / 2) - 1] == SecondPlayer) {
						printf(" X ");
					} else {
						printf("   ");
					}
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
