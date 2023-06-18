#include <stdio.h>

void Func(int (*A)[2][3]) { // passing 1-D Array
}

int main(int argc, char *argv[]) {

  int C[3][2][2] = {{{2, 5}, {7, 9}}, {{3, 4}, {6, 1}}, {{0, 8}, {11, 13}}};
  int A[2] = {1, 2};
  int B[2][3] = {
      {2, 4, 6},
      {5, 7, 8}}; // B returns int (*)[3] // ptr to array of 3 integers
  Func(A);        // A returns int*
  Func(C);

  return 0;
}
