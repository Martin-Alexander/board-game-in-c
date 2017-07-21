// Pieces
typedef struct Piece {
  int active;
  struct Piece *next;
} piece;

// Squares 
typedef struct Square {
  int col;
  int row;
  int HQ;
  int farm;
  int player;
  piece *head ;
} square;
