#include <stdio.h>

int main(int argc, char *argv[]) {
  int A[] = {2, 4, 5, 8, 1};
  printf("A = %d\n", A);         // 200
  printf("&A[0] = %d\n", &A[0]); // 200
  printf("A[0] = %d\n", A[0]);
  printf("*A = %d\n", *A);
  return 0;
}
