// Activates a given number of pieces in a square
void activatePiecesInSquare(square *square, int numberOfPiecesToBeActivated) {
  if (numberOfPiecesToBeActivated > 0) {
    piece *currentPiece = square->head;
    while (currentPiece != NULL) {
      if (currentPiece->active == 0) {
        currentPiece->active = 1;
        break;
      }
      currentPiece = currentPiece->next;
    }
    activatePiecesInSquare(square, numberOfPiecesToBeActivated - 1);
  }
}

// Inactivates a given number of pieces in a square
void inactivatePiecesInSquare(square *square, int numberOfPiecesToBeInactivated) {
  if (numberOfPiecesToBeInactivated > 0) {
    piece *currentPiece = square->head;
    while (currentPiece != NULL) {
      if (currentPiece->active == 1) {
        currentPiece->active = 0;
        break;
      }
      currentPiece = currentPiece->next;
    }
    inactivatePiecesInSquare(square, numberOfPiecesToBeInactivated - 1);
  }
}