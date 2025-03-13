#include <stdio.h>

void drawBoard(char board[10]) {
  int i;
  for (i = 1; i < 10; i++) {
    if (i == 1) {
      printf("-------------\n");
    }
    if (i % 3 == 0) {
      printf("| %c |\n", board[i - 1]);
      printf("-------------\n");
    } else {
      printf("| %c ", board[i - 1]);
    }
  }
}

int getSelection(char currentPlayer) {
  int selection;
  int isValidInput = 0;

  do {
    printf("(%c) Enter your selection (1-9): ", currentPlayer);
    scanf("%d", &selection);
    if (selection < 10 && selection > 0) {
      isValidInput = 1;
    } else {
      printf("Invalid input\n");
    }
  } while (!isValidInput);

  return selection;
}

int main() {
  printf("Welcome to TicTacToe!\n");
  printf("Moves are made by entering the number that matches like to take.\n");

  char board[10] = "123456789\0";
  char currentPlayer = 'X';
  drawBoard(board);

  while (1 == 1) {
    int selection = getSelection(currentPlayer);
    board[selection - 1] = currentPlayer;
    drawBoard(board);
    if (currentPlayer == 'X') {
      currentPlayer = 'O';
    } else {
      currentPlayer = 'X';
    }
  }
  return 0;
}
