#include "stdio.h"

int main() {
  int v[5] = {1, 2, 3, 4, 5};

  int *p = v;

  v[3] = 7;
  p[4] = 9800;
  printf("v[0] = %i\n", v[0]);
  printf("v[1] = %i\n", v[1]);
  printf("v[2] = %i\n", v[2]);
  printf("v[3] = %i\n", v[3]);
  printf("v[4] = %i\n", v[4]);
  return 0;
}
