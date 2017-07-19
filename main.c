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

int main() {

  // Array of pointers to squares with size rows x cols
  square *board[NUM_COLUMNS * NUM_ROWS];

  // Turn player initialized to player one
  int turnPlayer = 1;
 
  // Fill board with empty squares
  initializeBoardWithSquares(board);

  printPiecesInSquare(board[0]);

  printf("**Add 3 active pieces and 2 inactive pieces\n");

  addPieceToSquare(board[0], 1, 1);
  addPieceToSquare(board[0], 1, 1);
  addPieceToSquare(board[0], 1, 1);
  addPieceToSquare(board[0], 1, 0);
  addPieceToSquare(board[0], 1, 0);

  printPiecesInSquare(board[0]);

  printf("**Remove one active piece\n");

  removeActivePiecesFromSquare(board[0], 1);

  printPiecesInSquare(board[0]);

  return 0;
}
