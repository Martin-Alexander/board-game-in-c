// Determines whether or not fighting validations have been met
int fightingValidationsAreMet(square *attackSquare, square *defenseSquare) {
  if (
    attackSquare->player == turnPlayer &&
    squaresAreAjacent(attackSquare, defenseSquare) &&
    !squareIsEmpty(attackSquare) &&
    !squareIsEmpty(defenseSquare) &&
    squaresContainOpposingPieces(attackSquare, defenseSquare) &&
    numberOfActivePiecesInSquare(attackSquare) > 0
  ) {
    return 1;
  } else {
    return 0;
  }
}

// Determines the number of loses a side will sustain based on their stength 
// relative to their opponent's strength
int fightLosses(int myStrength, int opponentsStrength) {
  if (myStrength <= opponentsStrength) {
    return myStrength;
  } else {
    return opponentsStrength / (myStrength / opponentsStrength);
  }
}

// Engages two squares in combat provided that the validations are met
void fight(square *attackSquare, square *defenseSquare) {

  if (fightingValidationsAreMet(attackSquare, defenseSquare)) {

    int attackStrength = numberOfActivePiecesInSquare(attackSquare);
    int defenseStrength = totalNumberOfPiecesInSquare(defenseSquare);

    inactivatePiecesInSquare(attackSquare, numberOfActivePiecesInSquare(attackSquare));
    inactivatePiecesInSquare(defenseSquare, numberOfActivePiecesInSquare(defenseSquare));

    removeInactivePiecesFromSquare(attackSquare, fightLosses(attackStrength, defenseStrength));
    removeInactivePiecesFromSquare(defenseSquare, fightLosses(defenseStrength, attackStrength));

    if (squareIsEmpty(attackSquare)) { attackSquare->player = 0; }
    if (squareIsEmpty(defenseSquare)) { defenseSquare->player = 0; }
  }
}
