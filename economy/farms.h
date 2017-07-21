// Determines if the validations are met before a farm is built
int canBuildFarm(square *square) {

  if (
    square->player == turnPlayer &&
    numberOfActivePiecesInSquare(square) > 0 &&
    !square->farm &&
    !square->HQ
  ) {
    return 1;
  } else {
    return 0;
  }
}

// Builds a farm on a given square provided that validations are met
void buildFarm(square *square) {

  if (canBuildFarm(square)) {
    removeActivePiecesFromSquare(square, 1);
    square->farm = 1;
  }
}

// Returns the number of farms controlled by a player
int numberOfFarms(int player) {
  
  int i;
  int counter = 0;

  for (i = 0; i < NUM_ROWS * NUM_COLUMNS; i++) {
    if (board[i]->player == player && board[i]-> farm) {
      counter++;
    }
  }

  return counter;
}