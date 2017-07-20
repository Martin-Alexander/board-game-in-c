// Pieces
typedef struct Piece {
  int player;
  int active;
  struct Piece *next;
} piece;

// Squares 
typedef struct Square {
  int col;
  int row;
  int headquarters;
  int player;
  piece *head ;
} square;