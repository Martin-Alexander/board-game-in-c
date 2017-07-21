#include "./piece_add_remove_test.h"
#include "./activate_inactivate_test.h"
#include "./movement_test.h"
#include "./print_board_test.h"

void runAllTests() {

  runPieceAddRemoveTest(board);
  runActivateInactivateTest(board);
  runMovementTest(board);
  runPrintBoardTest(board);
}