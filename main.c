#define NUM_COLUMNS 7
#define NUM_ROWS 7
#define PLAYER_ONE_HQ_ROW 1
#define PLAYER_ONE_HQ_COL 3
#define PLAYER_TWO_HQ_ROW 6
#define PLAYER_TWO_HQ_COL 3

#include <stdlib.h>
#include <stdio.h>

#include "./game_structs.h"
#include "./game_data_initialization.h"

int main() {

  square *board[NUM_ROWS][NUM_COLUMNS];
  player *playerOne, *playerTwo;
  gameData *mainGameData;
  (*mainGameData).board = &board;
  (*mainGameData).playerOne = playerOne;
  (*mainGameData).playerTwo = playerTwo;

  return 0;
}
