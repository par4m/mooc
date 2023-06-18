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
  free(A);
  A = NULL; // After free, adjust pointer to NULL
  for (int j = 0; j < n; j++) {
    printf("%d\n", A[j]);
  }

  return 0;
}
