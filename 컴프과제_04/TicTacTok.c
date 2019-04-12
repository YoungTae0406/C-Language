#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {
	int inputMenu;	int turn =0;
	char ox[2] = { 'O', 'X' };
	puts("Play with Friend  :  1\nPlay with Computer  :  2");
	puts("Select Game Mode >> ");
	scanf_s("%d", &inputMenu);
	char BLANK = ' ';
	char board[3][3];

	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			board[x][y] = BLANK;
		}
	}

	if (inputMenu == 1) {//1vs1
		int temp, temp2;	int Exit = -1;
		while (1) {
			system("cls");
			printf("x|y[0]|[1]|[2]\n");
			for (int a = 0; a < 3; a++) {
				printf("   ---|---|---\n");
				printf("[%d] %c | %c | %c \n", a, board[a][0], board[a][1], board[a][2]);
			}
			printf("   ---|---|---\n");//말판 출력
			puts("turn 1, 2");
			for (int q = 0; q < 2; q++) {
				printf("Player %d's turn (x y)  :  ",q+1);
				rewind(stdin);
				scanf_s("%d %d", &temp, &temp2);
				if (board[temp][temp2] == ' ') {
					board[temp][temp2] = ox[q];
					turn++;
				}
			}
			if (turn == 10) {//무승부
				puts("무승부!!");
				Exit = 1;
				goto EXIT;
			}
			system("cls");
			printf("x|y[0]|[1]|[2]\n");
			for (int a = 0; a < 3; a++) {
				printf("   ---|---|---\n");
				printf("[%d] %c | %c | %c \n", a, board[a][0], board[a][1], board[a][2]);
			}
			//승리조건
			for (int p = 0; p < 2; p++) {
				for (int i = 0; i < 3; i++) { //가로
					if (board[i][0] == ox[p] && board[i][1] == ox[p] && board[i][2] == ox[p]) {
						printf("Player %d Win!!", p + 1);
						Exit = 1;
						goto EXIT;
					}
				}
					for (int i = 0; i < 3; i++) {//세로
						if (board[0][i] == ox[p] && board[1][i] == ox[p] && board[2][i] == ox[p]) {
							printf("Player %d Win!!", p + 1);
							Exit = 1;
							goto EXIT;
						}
					}
					if (board[0][0] == ox[p] && board[1][1] == ox[p] && board[2][2] == ox[p]) {//대각선
							printf("Player %d Win!!", p + 1);
							Exit = 1;
							goto EXIT;
					}
					if (board[0][2] == ox[p] && board[1][1] == ox[p] && board[2][0] == ox[p]) {//대각선
						printf("Player %d Win!!", p + 1);
						Exit = 1;
						goto EXIT;
					}
			}//가로,세로 반복 end point
			if (turn == 9) {//무승부
				puts("무승부!!");
				Exit = 1;
				goto EXIT;
			}
			if (Exit == 1) {//while 반복문 꺼지는 곳.
			EXIT:
				break;
			}
		}//while end point
	}
	if (inputMenu == 2) {//Computer
		int temp, temp2;	int Exit = -1;
		while (1) {
			system("cls");
			printf("x|y[0]|[1]|[2]\n");
			for (int a = 0; a < 3; a++) {
				printf("   ---|---|---\n");
				printf("[%d] %c | %c | %c \n", a, board[a][0], board[a][1], board[a][2]);
			}
			printf("   ---|---|---\n");//말판 출력
			puts("turn 1, 2");

			printf("Player 1's turn (x y)  :  ");
			rewind(stdin);
			scanf_s("%d %d", &temp, &temp2);
			if (board[temp][temp2] == 'O' || board[temp][temp2] == 'X') {
				printf("Wrong Position!!\n");
			}
			else {
				board[temp][temp2] = 'O';
				turn++;
			}//사용자
			system("cls");
			printf("x|y[0]|[1]|[2]\n");
			for (int a = 0; a < 3; a++) {
				printf("   ---|---|---\n");
				printf("[%d] %c | %c | %c \n", a, board[a][0], board[a][1], board[a][2]);
			}
			for (int p = 0; p < 2; p++) {
				for (int i = 0; i < 3; i++) { //가로
					if (board[i][0] == ox[p] && board[i][1] == ox[p] && board[i][2] == ox[p]) {
						printf("Player %d Win!!", p + 1);
						Exit = 1;
						goto EXIT2;
					}
				}
				for (int i = 0; i < 3; i++) {//세로
					if (board[0][i] == ox[p] && board[1][i] == ox[p] && board[2][i] == ox[p]) {
						printf("Player %d Win!!", p + 1);
						Exit = 1;
						goto EXIT2;
					}
				}
				if (board[0][0] == ox[p] && board[1][1] == ox[p] && board[2][2] == ox[p]) {//대각선
					printf("Player %d Win!!", p + 1);
					Exit = 1;
					goto EXIT2;
				}
				if (board[0][2] == ox[p] && board[1][1] == ox[p] && board[2][0] == ox[p]) {//대각선
					printf("Player %d Win!!", p + 1);
					Exit = 1;
					goto EXIT2;
				}
			}
			if (turn == 9) {//무승부
				puts("무승부!!");
				Exit = 1;
				goto EXIT2;
			}
			
			printf("Player 2's turn (x y)  :  ");
			while (1) {
				srand(time(NULL));
				int random = rand() % 3; //3미만의 숫자
				int random2 = rand() % 3;

				if (board[random][random2] == ' ') {
					board[random][random2] = 'X';
					turn++;
					break;
				}
			}
			system("cls");
			printf("x|y[0]|[1]|[2]\n");
			for (int a = 0; a < 3; a++) {
				printf("   ---|---|---\n");
				printf("[%d] %c | %c | %c \n", a, board[a][0], board[a][1], board[a][2]);
			}
			for (int p = 0; p < 2; p++) {
				for (int i = 0; i < 3; i++) { //가로
					if (board[i][0] == ox[p] && board[i][1] == ox[p] && board[i][2] == ox[p]) {
						printf("Player %d Win!!", p + 1);
						Exit = 1;
						goto EXIT2;
					}
				}
				for (int i = 0; i < 3; i++) {//세로
					if (board[0][i] == ox[p] && board[1][i] == ox[p] && board[2][i] == ox[p]) {
						printf("Player %d Win!!", p + 1);
						Exit = 1;
						goto EXIT2;
					}
				}
				if (board[0][0] == ox[p] && board[1][1] == ox[p] && board[2][2] == ox[p]) {//대각선
					printf("Player %d Win!!", p + 1);
					Exit = 1;
					goto EXIT2;
				}
				if (board[0][2] == ox[p] && board[1][1] == ox[p] && board[2][0] == ox[p]) {//대각선
					printf("Player %d Win!!", p + 1);
					Exit = 1;
					goto EXIT2;
				}
			}

			//가로,세로 반복 end point
			if (Exit == 1) {//while 반복문 꺼지는 곳.
			EXIT2:
				break;
			}

		}
	}
}