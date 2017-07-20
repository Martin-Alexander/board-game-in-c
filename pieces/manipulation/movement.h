// Move active pieces from one square to another provided the the following
// validations are met:
// - Squares are ajacent
// - Destination square is empty
void movePieces(square *fromSquare, square *toSquare, int numberOfPiecesToBeMoved, int player) {
  
  if (
    squaresAreAjacent(fromSquare, toSquare) == 1 &&
    squareIsEmpty(toSquare) == 1
  ) {
    // Validations have been met

    removeActivePiecesFromSquare(fromSquare, numberOfPiecesToBeMoved);
    addInactivePiecesToSquare(toSquare, player, numberOfPiecesToBeMoved);
  }
}