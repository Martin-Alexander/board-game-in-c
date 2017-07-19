// Returns the number of active pieces in a given square
int numberOfActivePiecesInSquare(square *square) {
  
  int counter = 0;
  piece *currentPieceNode = square->head;

  while (currentPieceNode != NULL) {
    if (currentPieceNode->active == 1) {
      counter++;
    }
    currentPieceNode = currentPieceNode->next;
  }
  
  return counter;
}

// Returns the number of inactive pieces in a given square
int numberOfInactivePiecesInSquare(square *square) {

  int counter = 0;
  piece *currentPieceNode = square->head;

  while (currentPieceNode != NULL) {
    if (currentPieceNode->active == 0) {
      counter++;
    }
    currentPieceNode = currentPieceNode->next;
  }
  
  return counter;
}

// Returns the total number of pieces in a given square
int totalNumberOfPiecesInSquare(square *square) {

  int counter = 0;
  piece *currentPieceNode = square->head;

  while (currentPieceNode != NULL) {
    counter++;
    currentPieceNode =  currentPieceNode->next;
  }

  return counter;
}