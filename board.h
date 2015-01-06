#include <string>

using namespace std;

class board{

  private:
	char Board[9][9];

  public:
	board();
	void printBoard();
};

class Peice{
  friend class board;

  private:
	char* Board_pos;
	
  public:
	Peice();
	bool Check_valid();
	void Move();
};

class Pawn: public Piece{

  private:
	bool promote;
	bool En_pessant;

  public:
	Pawn();
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

	
	
	
	
	

	
