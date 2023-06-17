#include <stdio.h>

int main(int argc, char *argv[]) {

  int A[5];
  A[0] = 1;
  printf("A[0] = %d\n", A[0]);
  printf("&A[0] = %d\n", &A[0]);
  int *p = &A[0];
  printf("p = %d\n", p);
  printf("*p  = %d \n", *p);
  int *Q = A;
  printf("Q = %d\n", Q);   // gives address of first element in A
  printf("*Q = %d\n", *Q); // gives value at first element

  return 0;
}
