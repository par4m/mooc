#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Reverse(char C[], int n) {}

int main(int argc, char *argv[]) {

  char C[51];
  printf("Enter a string: ");
  gets(C);
  Reverse(C, strlen(C));
  printf("Output = %s ", C);

  return 0;
}
