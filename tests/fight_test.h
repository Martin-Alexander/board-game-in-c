void runFightTest() {

  square *playerOneSquare = findSquare(3, 3);
  square *playerTwoSquare = findSquare(4, 3);

  addActivePiecesToSquare(playerOneSquare, 5);
  playerOneSquare->player = 1;

  addActivePiecesToSquare(playerTwoSquare, 10);
  playerTwoSquare->player = 2;

  turnPlayer = 2;

  fight(playerTwoSquare, playerOneSquare);
}