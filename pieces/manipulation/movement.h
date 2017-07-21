// Returns whether or not movement validations have been met
int movementValidationsAreMet(square *fromSquare, square *toSquare, int numberOfPiecesToBeMoved) {
  if (
    fromSquare->player == turnPlayer &&
    squaresAreAjacent(fromSquare, toSquare) &&
    !squareIsEmpty(fromSquare) &&
    squareIsEmpty(toSquare) &&
    numberOfPiecesToBeMoved <= numberOfActivePiecesInSquare(fromSquare)
  ) {
    return 1;
  } else {
    return 0;
  }
}

// Move pieces from one square to another provided that validations are met
void movePieces(square *fromSquare, square *toSquare, int numberOfPiecesToBeMoved) {

  if (movementValidationsAreMet(fromSquare, toSquare, numberOfPiecesToBeMoved)) {
    
    removeActivePiecesFromSquare(fromSquare, numberOfPiecesToBeMoved);
    addInactivePiecesToSquare(toSquare, numberOfPiecesToBeMoved);
    
    toSquare->player = fromSquare->player;
    if (squareIsEmpty(fromSquare) && !fromSquare->HQ) { 
      fromSquare->player = 0; 
    }
  }
}
