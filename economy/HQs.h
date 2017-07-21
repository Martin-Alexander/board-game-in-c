// Determines if the validations are met before an HQ is built
int canBuildHQ(square *square) {

  if (
    square->player == turnPlayer &&
    !square->HQ &&
    !square->farm &&
    numberOfActivePiecesInSquare(square) > 3
  ) {
    return 1;
  } else {
    return 0;
  }
}

// Builds an HQ on a given square provided that validations are met
void buildHQ(square *square) {
  
  if (canBuildHQ(square)) {
    removeActivePiecesFromSquare(square, 4);
    square->HQ = 1;
  }
}

// Returns the number of HQs on the board that belong to a given player
int numberOfHQs(int player) {
  
  int i;
  int counter = 0;

  for (i = 0; i < NUM_ROWS * NUM_COLUMNS; i++) {
    if (board[i]->player == player && board[i]->HQ) {
      counter++;
    }
  }

  return counter;
} 