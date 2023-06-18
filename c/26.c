#include "stdio.h"
#include "stdlib.h"
#include <time.h>
// "Jack Queen King" - computer shuffles these cards
// player has to guess the position of queen
// if he wins, he takes 3*bet
// if he loses, he loses the bet amount.
// player has $100 initially

int cash = 100;
void Play(int bet) {
  char *C =
      (char *)malloc(100000 * sizeof(char)); // c++ : char *C = new char[3];
  C[0] = 'J';
  C[1] = 'Q';
  C[2] = 'K';
  printf("Shuffling ...\n");
  srand(time(NULL)); // seeding random number generator
  int i;
  for (i = 0; i < 5; i++) {
    int x = rand() % 3;
    int y = rand() % 3;
    int temp = C[x];
    C[x] = C[y];
    C[y] = temp; // swaps characters at position x and y
  }
  int playerGuess;
  printf("Whats the position of queen - 1,2,3 ?\n");
  scanf("%d", &playerGuess);
  if (C[playerGuess - 1] == 'Q') {
    cash += 3 * bet;
    printf("You win | Result = \"%c %c %c\" Total Cash = %d\n", C[0], C[1],
           C[2], cash);
  } else {
    cash -= bet;
    printf("You Loose | Result = \"%c %c %c\" Total Cash = %d\n", C[0], C[1],
           C[2], cash);
  }
  free(C);
}

int main(int argc, char *argv[]) {
  int bet;
  printf("Welcome to Virtual Casino\n");
  printf("Total cash = $%d\n", cash);
  while (cash > 0) {
    printf("What's your bet ? $\n");
    scanf("%d", &bet);
    if (bet == 0 || bet > cash) {
      break;
    }
    Play(bet);
  }

  return 0;
}
