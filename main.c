#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define NUM_COLUMNS 7
#define NUM_ROWS 7
#define PLAYER_ONE_HQ_ROW 1
#define PLAYER_ONE_HQ_COL 3
#define PLAYER_TWO_HQ_ROW 5
#define PLAYER_TWO_HQ_COL 3

#include "./game_setup/index.h"
#include "./pieces/index.h"
#include "./input_output/index.h"
#include "./tests/index.h"
#include "./initialization/game_data_initialization.h"


int main() {

  initializeBoardWithSquares(board);
  initializeHQs(board);

  // runAllTests();
  movePieces(board[38], board[31], 10);
  runPrintBoardTest(board);

  return 0;
}
