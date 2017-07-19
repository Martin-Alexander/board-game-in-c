// Returns a pointer to a piece from a given square. If the square has no pieces
// then the head (a NULL pointer) is returned
piece * findLastPiece(square *square) {

  if (square->head == NULL) {
    return square->head;
  } else {
    piece *currentPieceNode = square->head;
    while (currentPieceNode != NULL) {
      if (currentPieceNode->next == NULL ) {
        return currentPieceNode;
      }
      currentPieceNode = currentPieceNode->next;
    }
  }
}