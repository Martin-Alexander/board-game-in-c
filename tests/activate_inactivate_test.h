void runActivateInactivateTest(square *board[]) {

  printf("\n==== Activate/Inactive Tests ====\n\n");

  printf("**Add 2 active pieces and 2 inactive pieces**\n");

  addActivePiecesToSquare(board[2], 1, 2);
  addInactivePiecesToSquare(board[2], 1, 2);

  printPiecesInSquare(board[2]);


  printf("**Activate 2 pieces**\n");

  activatePiecesInSquare(board[2], 2);

  printPiecesInSquare(board[2]);


  printf("**Inactivate 3 pieces**\n");

  inactivatePiecesInSquare(board[2], 3);

  printPiecesInSquare(board[2]);

}