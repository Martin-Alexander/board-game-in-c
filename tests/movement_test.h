void runMovementTest(square *board[]) {

  printf("\n\n==== Movement Tests ====\n\n");
  printPiecesInSquare(board[3]);

  printf("\n**Add 2 active pieces and 2 inactive pieces**\n");
  addActivePiecesToSquare(board[3], 2);
  addInactivePiecesToSquare(board[3], 2);
  printPiecesInSquare(board[3]);

  printf("\n**Try to move pieces to invalid square**\n");
  movePieces(board[3], board[12], 2); 
  printf("From square: ");
  printPiecesInSquare(board[3]);
  printf("To square: ");
  printPiecesInSquare(board[12]); 
  
  printf("\n**Try to move 2 pieces to valid square**\n");
  movePieces(board[3], board[10], 2);
  printf("From square: ");
  printPiecesInSquare(board[3]);
  printf("To square: ");
  printPiecesInSquare(board[10]);
}