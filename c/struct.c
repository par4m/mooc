#include "stdio.h"
#include <string.h>

struct Player {
  char name[12];
  int score;
};

int main(int argc, char *argv[]) {

  struct Player player1; // struct Player will act as a datatype
  struct Player player2;

  strcpy(player1.name, "Bro");
  player1.score = 4;

  strcpy(player2.name, "Brah");
  player2.score = 5;

  printf("%s\t", player1.name);
  printf("%d\n", player1.score);
  printf("%s\t", player2.name);
  printf("%d\n", player2.score);

  return 0;
}
