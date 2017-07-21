// Initializes an array with pointers to empty squares
void initializeBoardWithSquares(square *board[]) {

  int row, col;
  int squareCounter = 0;

  for (row = 0; row < NUM_ROWS; row++){
    for (col = 0; col < NUM_COLUMNS; col++) {

      square *newSquare = malloc(sizeof(square));

      newSquare->row = row;
      newSquare->col = col;
      newSquare->HQ = 0;
      newSquare->farm = 0;
      newSquare->head = NULL;

      board[squareCounter] = newSquare;
      squareCounter++;
    }
  }
}

// Initializes the board with the headquarters of player one and player two
void initializeHQs(square *board[]) {

  square *playerOneHQ = findSquare(PLAYER_ONE_HQ_ROW, PLAYER_ONE_HQ_COL);
  square *playerTwoHQ = findSquare(PLAYER_TWO_HQ_ROW, PLAYER_TWO_HQ_COL);

  playerOneHQ->HQ = 1;
  playerOneHQ->player = 1;
  addActivePiecesToSquare(playerOneHQ, 10);

  playerTwoHQ->HQ = 1;
  playerTwoHQ->player = 2;
  addActivePiecesToSquare(playerTwoHQ, 10);
}