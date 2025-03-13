#include <stdio.h>

void drawBoard() {
  printf("1 | 2 | 3\n");
  printf("4 | 5 | 6\n");
  printf("7 | 8 | 9\n");
}

int getSelection() {
  int selection;
  int isValidInput = 0;

  do {
    printf("Enter your selection (1-9): ");
    scanf("%d", &selection);
    if (selection < 9 && selection > 1) {
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
  drawBoard();

  int selection = getSelection();

  printf("You selected: %d\n", selection);
  return 0;
}
