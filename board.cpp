#include "board.h"
#include <iostream>

using namespace std;

board::board(){
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			Board[i][j] = '.';
		}
	}
}

void board::printBoardWhite(){
	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){

			if (i == 8){
				if (j == 0){
					cout << "    ";
				}
			
				else{
					cout << (j) << "   ";
				}
			}

			else if (j == 0){
				cout << (char)('h'-i) << "   ";
			}

			else{
				cout << Board[i][j-1] << "   ";
			}
		}
		cout << endl << endl;
	}
}

void board::printBoardBlack(){
	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){

			if (i == 8){
				if (j == 0){
					cout << "    ";
				}
			
				else{
					cout << (9-j) << "   ";
				}
			}

			else if (j == 0){
				cout << (char)('a'+i) << "   ";
			}

			else
				cout << Board[i][j-1] << "   ";
		}
		cout << endl << endl;
	}
}




Piece::Piece(int r, int c, board board1)	:	Board_pos(&board1.Board[r][c]){}







