// Returns the number of active pieces in a given square
int numberOfActivePiecesInSquare(square *square) {
  int counter = 0;

  square *head = *(*square.pieces);

  if (*head == NULL) { return counter };
  
  return counter;
}