#include <string>

using namespace std;

class board{
  friend class Piece;

  private:
	char Board[8][8];

  public:
	board();
	void printBoardWhite();
	void printBoardBlack();
};

class Piece{
  friend class board;

  private:
	char* Board_pos;
	
  public:
	Piece(int r, int c, board board1);
	bool Check_valid();
	void Move();
};

class Pawn: public Piece{

  private:
	static char symbol = P;
	bool promote();
	bool En_pessant();

  public:
	Pawn();
	void remove();
	static const char symbol = P;
};

class Knight: public Piece{

  public:
	Knight();
};

class Rook: public Piece{

  public:
	Rook();
};

class Bishop: public Piece{
  
  public:
	Bishop();
};

class Queen: public Piece{

  public:
	Queen();

};

class King: public Piece{

  private:
	bool castle;
  
  public:
	King();
};

	
	
	
	
	

	
