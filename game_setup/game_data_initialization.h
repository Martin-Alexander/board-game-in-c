// Initializes an array with pointers to empty squares
void initializeBoardWithSquares(square *board[]) {

  int row, col;
  int squareCounter = 0;

  for (row = 0; row < NUM_ROWS; row++){
    for (col = 0; col < NUM_COLUMNS; col++) {

      square *newSquare = malloc(sizeof(square));

      newSquare->row = row;
      newSquare->col = col;
      newSquare->player = 0;
      newSquare->headquarters = 0;
      newSquare->farm = 0;
      newSquare->head = NULL;

      board[squareCounter] = newSquare;
      squareCounter++;
    }
  }
}
