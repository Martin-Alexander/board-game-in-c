void runPrintBoardTest(square *board[]) {

  int boardIndex = 0;
  int row, col;

  for (row = 0; row < NUM_ROWS; row++) {
    for (col = 0; col < NUM_COLUMNS; col++) {
      printf("%s", printUpperHalfOfSquare(board[boardIndex]));
      boardIndex++;
    }
    printf("|\n");
  }
}