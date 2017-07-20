// Move active pieces from one square to another provided the the following
// validations are met:
// - Squares are ajacent
// - Destination square is empty
void movePieces(square *fromSquare, square *toSquare, int numberOfPiecesToBeMoved) {

  if (
    squaresAreAjacent(fromSquare, toSquare) == 1 &&
    squareIsEmpty(toSquare) == 1 &&
    numberOfPiecesToBeMoved <= numberOfActivePiecesInSquare(fromSquare)
  ) {
    // Validations have been met

    removeActivePiecesFromSquare(fromSquare, numberOfPiecesToBeMoved);
    addInactivePiecesToSquare(toSquare, fromSquare->player, numberOfPiecesToBeMoved);
  }
}