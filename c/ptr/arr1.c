#include "stdio.h"

int main(int argc, char *argv[]) {
  int A[2][3];
  int(*p)[3] = A;

  printf("%d", *p);

  return 0;
}
