// Returns whether or not two squares are ajacent
int squaresAreAjacent(square *squareOne, square *squareTwo) {

  if (
    squareOne->col < squareTwo->col + 2 &&
    squareOne->col > squareTwo->col - 2 &&
    squareOne->row < squareTwo->row + 2 &&
    squareOne->row > squareTwo->row - 2
  ) {
    return 1;
  } else {
    return 0;
  }
}

// Returns whether or not a square is empty
int squareIsEmpty(square *square) {

  if (square->head == NULL) {
    return 1;
  } else {
    return 0;
  }
}