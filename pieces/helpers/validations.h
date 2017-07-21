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

// Returns whether or not two squares contain pieces belonging to opposing 
// players
int squaresContainOpposingPieces(square *fromSquare, square *toSquare) {

  // Warning: this will return true if one of the squares empty. The assumption
  // of this function is that it will be called alongside validations that 
  // assure that niether the fromSquare or the toSquare will be empty
  if (fromSquare->player != toSquare->player) {
    return 1;
  } else  {
    return 0;
  }
}