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
    
    // Setting 'player' of 'fromSquare' to 0 if all pieces left
    if (
      squareIsEmpty(fromSquare) && 
      !fromSquare->HQ &&
      !fromSquare->farm
    ) { 
      fromSquare->player = 0; 
    }

    // Destroying a farm or HQ if an opposing player moved onto it
    if (toSquare->player != fromSquare->player) {
      toSquare->HQ = 0;
      toSquare->farm = 0;
    }
  }
}
