#include <stdio.h>

int main ()
{
  int a; // integer
  a = 5;
  //
  int *P; // pointer to integer
  P = &a;
  //
  int **Q; // double pointer -> points to a pointer
  Q = &P;
  //
  char c; // character
  char *P0; // pointer to character
  //
  double d; // double
  double *P1; // pointer to double
  //
  printf("Address of a is %p\n", P);
  printf("Address of P is %p\n", Q);
  printf("Value of a is %d\n", **Q);
  printf("Value of a is %d\n", *P);
  return 0;
}
