void runPieceAddRemoveTest(square *board[]) {
  
  printPiecesInSquare(board[0]);

  printf("**Add 3 active pieces and 2 inactive pieces\n");

  addPieceToSquare(board[0], 1, 0);
  addPieceToSquare(board[0], 1, 0);
  addPieceToSquare(board[0], 1, 1);
  addPieceToSquare(board[0], 1, 1);
  addPieceToSquare(board[0], 1, 1);

  printPiecesInSquare(board[0]);

  printf("**Remove two active piece\n");

  removeActivePiecesFromSquare(board[0], 2);

  printPiecesInSquare(board[0]);

  printf("**Add an active piece and an inactive piece\n");

  addPieceToSquare(board[0], 1, 1);
  addPieceToSquare(board[0], 1, 0);

  printPiecesInSquare(board[0]);

  printf("**Remove two active pieces\n");

  removeActivePiecesFromSquare(board[0], 2);

  printPiecesInSquare(board[0]);

  printf("**Remove three inactive pieces\n");

  removeInactivePiecesFromSquare(board[0], 3);

  printPiecesInSquare(board[0]);
}