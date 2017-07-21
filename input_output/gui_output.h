// Returns a string representing the upper half of a square (i.e., the number of
// active and inactive pieces)
char * upperHalfOfSquare(square *square) {
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

char * lowerHalfOfSquare(square *square) {
  char *lowerHalf = malloc(sizeof(char) * 11);
  lowerHalf[0] = '|'; lowerHalf[1] = ' ';
  if (square->player == 0) {
    lowerHalf[2] = '-'; lowerHalf[3] = '-';
  } else if (square->player == 1) {
    lowerHalf[2] = 'p'; lowerHalf[3] = '1';
  } else if (square->player == 2) {
    lowerHalf[2] = 'p'; lowerHalf[3] = '2';
  }
  lowerHalf[4] = ' '; lowerHalf[5] = '/'; lowerHalf[6] = ' ';
  if (square->HQ) {
    lowerHalf[7] = 'H'; lowerHalf[8] = 'Q';
  } else if (square->farm) {
    lowerHalf[7] = 'F'; lowerHalf[8] = ' ';
  } else {
    lowerHalf[7] = '-'; lowerHalf[8] = '-';
  }
  lowerHalf[9] = ' '; lowerHalf[10] = '\0';
  return lowerHalf;
}

// Prints a representation of the board to the terminal 
void printBoard() {
  int upperIndex = 0;
  int lowerIndex = 0;
  int row, col;

  for (row = 0; row < NUM_ROWS; row++) {
    for (col = 0; col < NUM_COLUMNS; col++) {
      printf("%s", upperHalfOfSquare(board[upperIndex]));
      upperIndex++;
    }
    printf("|\n");
    for (col = 0; col < NUM_COLUMNS; col++) {
      printf("%s", lowerHalfOfSquare(board[lowerIndex]));
      lowerIndex++;
    }
    printf("|\n----------------------------------------------------------------------|\n");
  }
}

// Prints out the number of active and inactive pieces for a given square
void printPiecesInSquare(square *square) {
  printf(
    "Active: %d / Inactive: %d\n", 
    numberOfActivePiecesInSquare(square),
    numberOfInactivePiecesInSquare(square)
  );
}