void initializeBoardWithSquares(square *board[][NUM_COLUMNS]) {
  int row, col;
  for (row = 0; row < NUM_ROWS; row++){
    for (col = 0; col < NUM_COLUMNS; col++) {
      square *newSquare;
      board[row][col] = newSquare;
    }
  }
}

// void setPlayersHQLocation(gameData *gameData) {

//   player playerOne = gameData->playerOne;
//   player playerTwo = gameData->playerTwo;
//   square *board[NUM_ROWS][NUM_COLUMNS] = (*gameData).board;

//   square playerOneHQSquare = board[PLAYER_ONE_HQ_ROW][PLAYER_ONE_HQ_COL];
//   square playerTwoHQSquare = board[PLAYER_TWO_HQ_ROW][PLAYER_TWO_HQ_COL];

//   (*playerOneHQSquare).HQ = 1;
//   (*playerOneHQSquare).player = playerOne;

//   (*playerTwoHQSquare).HQ = 1;
//   (*playerTwoHQSquare).player = playerTwo;
// }

// void initializeGameData(gameData *gameData) {
//   initializeBoardWithSquares(gameData->board);
//   setPlayersHQLocation(gameData);
// }

