// Adds a given number of active pieces to a square
void addActivePiecesToSquare(square *square, int numberOfPiecesToBeAdded) {
  if (numberOfPiecesToBeAdded > 0) {
    piece *newPiece = malloc(sizeof(piece));
    newPiece->active = 1;
    newPiece->next = NULL;

    if (square->head == NULL) {
      square->head = newPiece;
    } else {
      piece *lastNode = findLastPiece(square);
      lastNode->next = newPiece;
    }
    addActivePiecesToSquare(square, numberOfPiecesToBeAdded - 1);
  }
}

// Adds a given number of inactive pieces to a square
void addInactivePiecesToSquare(square *square, int numberOfPiecesToBeAdded) {
  if (numberOfPiecesToBeAdded > 0) {
    piece *newPiece = malloc(sizeof(piece));
    newPiece->active = 0;
    newPiece->next = NULL;

    if (square->head == NULL) {
      square->head = newPiece;
    } else {
      piece *lastNode = findLastPiece(square);
      lastNode->next = newPiece;
    }
    addInactivePiecesToSquare(square, numberOfPiecesToBeAdded - 1);
  }
}

// Removes a given number of active pieces from a given square
void removeActivePiecesFromSquare(square *square, int numberOfPiecesToBeRemoved) {
  if (numberOfPiecesToBeRemoved > 0) {
    if ((square->head)->active == 1) {
      // The first piece in the linked list is active
      
      square->head = (square->head)->next;
    } else { 
      // Otherwise we'll iterate through the pieces until we find an active one

      piece *currentPiece = square->head;
      while (currentPiece->next != NULL) {
        if ((currentPiece->next)->active == 1) {
          currentPiece->next = (currentPiece->next)->next;
          break;
        }
        currentPiece = currentPiece->next;
      }
    }
    removeActivePiecesFromSquare(square, numberOfPiecesToBeRemoved - 1);
  }
}

// Removes a given number of inactive pieces from a given square
void removeInactivePiecesFromSquare(square *square, int numberOfPiecesToBeRemoved) {
  if (numberOfPiecesToBeRemoved > 0) {
    if ((square->head)->active == 0) {
      // The first piece in the linked list is active
      
      square->head = (square->head)->next;
    } else { 
      // Otherwise we'll iterate through the pieces until we find an active one

      piece *currentPiece = square->head;
      while (currentPiece->next != NULL) {
        if ((currentPiece->next)->active == 0) {
          currentPiece->next = (currentPiece->next)->next;
          break;
        }
        currentPiece = currentPiece->next;
      }
    }
    removeInactivePiecesFromSquare(square, numberOfPiecesToBeRemoved - 1);
  }
}

// Remove all pieces from a given square
void removeAllPiecesFromSquare(square *square) {
  square->head = NULL;
}