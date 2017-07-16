
typedef struct Piece {
  int player;
  int active;
  struct Piece *next;
} piece;

typedef struct Square {
  int column;
  int row;
  int headquarters;
  int player;
  piece **piece ;
} square;

typedef struct GameData {
  square *(*board)[NUM_ROWS][NUM_COLUMNS];
} gameData;