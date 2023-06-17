#include <stdio.h>

void Double(int *A, int size) { // "int* A" or "int A[]".. it's the same

  int i, sum = 0;
  for (i = 0; i < size; i++) {
    A[i] = 2 * A[i];
  }
}

int main(int argc, char *argv[]) {

  int A[] = {1, 2, 3, 4, 5};
  int size = sizeof(A) / sizeof(A[0]);
  Double(A, size); //
  for (int i = 0; i < size; i++) {
    printf("%d\n", A[i]);
  } // 2 , 4 , 6 , 8 , 10
  return 0;
}
