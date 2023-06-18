#include <stdio.h>
#include <stdlib.h>

int main() {

  int n;
  printf("Enter size of array: \n");
  scanf("%d", &n);
  int *A = (int *)calloc(n, sizeof(int)); // dynamically allocated array
  for (int i = 0; i < n; i++) {
    A[i] = i + 1;
  }
  int *B = (int *)realloc(NULL, n * sizeof(int)); // eqiuivalent to malloc
  printf(" Prev Block Address = %d New Block Address = %d\n", A, B);
  for (int j = 0; j < n; j++) {
    printf("%d\n", B[j]);
  }

  return 0;
}
