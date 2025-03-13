#include <stdio.h>

int main() {
  printf("Welcome to TicTacToe!\n");
  printf("Moves are made by entering the number that matches like to take.\n");
  printf("1 | 2 | 3\n");
  printf("4 | 5 | 6\n");
  printf("7 | 8 | 9\n");


  int place;
  printf("Enter your selection (1-9): ");

  scanf("%d", &place);
  printf("You selected: %d\n", place);
  return 0;
}
