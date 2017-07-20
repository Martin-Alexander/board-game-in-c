#define NUM_COLUMNS 7
#define NUM_ROWS 7
#define PLAYER_ONE_HQ_ROW 1
#define PLAYER_ONE_HQ_COL 3
#define PLAYER_TWO_HQ_ROW 6
#define PLAYER_TWO_HQ_COL 3

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "./game_structs.h"
#include "./game_data_initialization.h"

#include "./piece_helpers.h"
#include "./piece_counting.h"
#include "./piece_manipulation.h"
#include "./gui_output.h"
#include "./gui_input.h"

// Include tests
#include "./piece_add_remove_test.h"

int main() {

  // Array of pointers to squares with size rows x cols
  square *board[NUM_COLUMNS * NUM_ROWS];

  // Turn player initialized to player one
  int turnPlayer = 1;
 
  // Fill board with empty squares
  initializeBoardWithSquares(board);

  // Test scipt
  runPieceAddRemoveTest(board);

  return 0;
}
