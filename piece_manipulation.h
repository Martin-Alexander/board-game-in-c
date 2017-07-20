// Adds a piece to a square
void addPieceToSquare(square *square, int player, int active) {

  piece *newPiece = malloc(sizeof(piece));
  newPiece->active = active;
  newPiece->player = player;
  newPiece->next = NULL;

  if (square->head == NULL) {
    square->head = newPiece;
  } else {
    piece *lastNode = findLastPiece(square);
    lastNode->next = newPiece;
  }
}

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