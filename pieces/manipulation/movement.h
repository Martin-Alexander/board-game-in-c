// Move active pieces from one square to another provided that the following
// validations are met:
// - Squares are ajacent
// - Destination square is empty
// - Departure square is not empty
// - The number of pieces to be moved does not exceed the number of active 
//   pieces in the square
// - It is the correct player's turn
void movePieces(square *fromSquare, square *toSquare, int numberOfPiecesToBeMoved) {

  if (
    fromSquare->player == turnPlayer &&
    squaresAreAjacent(fromSquare, toSquare) &&
    !squareIsEmpty(fromSquare) &&
    squareIsEmpty(toSquare) &&
    numberOfPiecesToBeMoved <= numberOfActivePiecesInSquare(fromSquare)
  ) {
    // Validations have been met

    removeActivePiecesFromSquare(fromSquare, numberOfPiecesToBeMoved);
    addInactivePiecesToSquare(toSquare, numberOfPiecesToBeMoved);
    toSquare->player = fromSquare->player;
    if (squareIsEmpty(fromSquare) && !fromSquare->HQ) { fromSquare->player = 0; }
  }
}