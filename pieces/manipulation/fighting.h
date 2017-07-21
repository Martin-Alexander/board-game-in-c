// Engages two squares in combat provided that the following validatiosn are 
// met:
// - Squares are adjacent
// - Squares are not empty
// - Squares contain pieces of opposing players
void fight(square *fromSquare, square *toSquare) {

  if (
    squaresAreAjacent(fromSquare, toSquare) &&
    !squareIsEmpty(fromSquare) &&
    !squareIsEmpty(toSquare) &&
    squaresContainOpposingPieces(fromSquare, toSquare)
  ) {
    // FIGHT

  }
}