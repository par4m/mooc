#include "stdio.h"

void print(char *C) {

  int i;
  while (*C != '\0') {
    printf("%c", C[i]);
    C++;
  }
}

int main(int argc, char *argv[]) {

  char C[20] = "Hello";
  print(C);

  return 0;
}
