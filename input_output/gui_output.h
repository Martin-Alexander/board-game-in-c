// Prints a representation of the board to the terminal 
void printBoard(square *boardp[]) {
  int row, col;
  for (row = 0; row < NUM_ROWS; row++){
    printf("\n");
    for (col = 0; col < NUM_COLUMNS; col++) {
      // TODO: printSquare function
    }
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