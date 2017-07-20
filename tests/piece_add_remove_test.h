void runPieceAddRemoveTest(square *board[]) {
  
  printf("\n==== Add/Remove Tests ====\n\n");

  printPiecesInSquare(board[0]);

  printf("**Add 3 active pieces and 2 inactive pieces\n");

  addPieceToSquare(board[0], 1, 0);
  addPieceToSquare(board[0], 1, 0);
  addPieceToSquare(board[0], 1, 1);
  addPieceToSquare(board[0], 1, 1);
  addPieceToSquare(board[0], 1, 1);

  printPiecesInSquare(board[0]);

  printf("**Remove 2 active piece\n");

  removeActivePiecesFromSquare(board[0], 2);

  printPiecesInSquare(board[0]);

  printf("**Add 1 active piece and 1 inactive piece\n");

  addPieceToSquare(board[0], 1, 1);
  addPieceToSquare(board[0], 1, 0);

  printPiecesInSquare(board[0]);

  printf("**Remove 2 active pieces\n");

  removeActivePiecesFromSquare(board[0], 2);

  printPiecesInSquare(board[0]);

  printf("**Remove 3 inactive pieces\n");

  removeInactivePiecesFromSquare(board[0], 3);

  printPiecesInSquare(board[0]);
}