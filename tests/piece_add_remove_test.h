void runPieceAddRemoveTest(square *board[]) {
  
  printf("\n==== Add/Remove Tests ====\n\n");

  printPiecesInSquare(board[0]);


  printf("**Add 3 active pieces and 2 inactive pieces\n");

  addInactivePiecesToSquare(board[0], 1, 2);
  addActivePiecesToSquare(board[0], 1, 3);

  printPiecesInSquare(board[0]);


  printf("**Remove 2 active piece**\n");

  removeActivePiecesFromSquare(board[0], 2);

  printPiecesInSquare(board[0]);


  printf("**Add 1 active piece and 1 inactive piece**\n");

  addActivePiecesToSquare(board[0], 1, 1);
  addInactivePiecesToSquare(board[0], 1, 1);

  printPiecesInSquare(board[0]);


  printf("**Remove 2 active pieces**\n");

  removeActivePiecesFromSquare(board[0], 2);

  printPiecesInSquare(board[0]);


  printf("**Remove 3 inactive pieces**\n");

  removeInactivePiecesFromSquare(board[0], 3);

  printPiecesInSquare(board[0]);


  printf("**Add 2 active pieces and 2 inactive pieces**\n");

  addActivePiecesToSquare(board[1], 1, 2);
  addInactivePiecesToSquare(board[1], 1, 2);

  printPiecesInSquare(board[1]);


  printf("**Remove all pieces**\n");

  removeAllPiecesFromSquare(board[1]);

  printPiecesInSquare(board[1]);


}