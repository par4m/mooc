#include <stdio.h>

int main(int argc, char *argv[]) {

  int C[3][2][2] = {{{2, 5}, {7, 9}}, {{3, 4}, {6, 1}}, {{0, 8}, {11, 13}}};
  printf("%d %d %d %d\n", C, *C, C[0], &C[0][0]); // all are same
  printf("%d\n", *(C[0][0] + 1));                 // 5

  return 0;
}
