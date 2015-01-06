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

void board::printBoard(){
	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){

			if (i == 0){
				if (j == 0){
					cout << "  ";
				}
			
				else{
					cout << (0+j) << " ";
				}
			}

			else if (j == 0){
				cout << (char)('a'+i-1) << " ";
			}

			else
				cout << Board[i-1][j-1] << " ";
		}
		cout << endl << endl;
	}
}
