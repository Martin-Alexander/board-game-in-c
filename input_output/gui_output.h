// Prints a representation of the board to the terminal 
void printBoard(square *board[]) {
  int row, col;
  for (row = 0; row < NUM_ROWS; row++){
    printf("\n");
    for (col = 0; col < NUM_COLUMNS; col++) {
      // TODO: printSquare function
    }
  }
}

// Returns a string representing the upper half of a square (i.e., the number of
// active and inactive pieces)
char * printUpperHalfOfSquare(square *square) {
  char *upperHalf = malloc(sizeof(char) * 11);
  upperHalf[0] = '|'; upperHalf[1] = ' ';
  if (numberOfActivePiecesInSquare(square) > 9) {
    upperHalf[2] = (numberOfActivePiecesInSquare(square) / 10) + '0';
    upperHalf[3] = (numberOfActivePiecesInSquare(square) - ((numberOfActivePiecesInSquare(square) / 10) * 10)) + '0';
  } else {
    upperHalf[2] = ' ';
    upperHalf[3] = (numberOfActivePiecesInSquare(square)) + '0';
  }
  upperHalf[4] = ' '; upperHalf[5] = '/'; upperHalf[6] = ' ';
  if (numberOfInactivePiecesInSquare(square) > 9) {
    upperHalf[7] = (numberOfInactivePiecesInSquare(square) / 10) + '0';
    upperHalf[8] = (numberOfInactivePiecesInSquare(square) - ((numberOfInactivePiecesInSquare(square) / 10) * 10)) + '0';
  } else {
    upperHalf[7] = ' ';
    upperHalf[8] = (numberOfInactivePiecesInSquare(square)) + '0';
  }
  upperHalf[9] = ' '; upperHalf[10] = '\0';
  return upperHalf;
}

// Prints out the number of active and inactive pieces for a given square
void printPiecesInSquare(square *square) {
  printf(
    "Active: %d / Inactive: %d\n", 
    numberOfActivePiecesInSquare(square),
    numberOfInactivePiecesInSquare(square)
  );
}