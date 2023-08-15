#include <stdio.h>
#include <stdlib.h>

void Smallest(int *arr, int n) {
  int small = *arr;
  for (int i = 0; i < n; i++) {
    if (*(arr + i) < small) {
      small = *(arr + i);
    }
  }
  printf("Smallest in array is : %d ", small);
}

int main(int argc, char *argv[]) {
  int n = 10;
  int *arr = (int *)malloc(n * (sizeof(int)));
  for (int i = 0; i < n; i++) {
    // *(arr + i) = i + 1;
    scanf("%d", arr + i);
  }

  for (int i = 0; i < n; i++) {
    printf("%d\t", *(arr + i));
  }
  Smallest(arr, n);

  free(arr);

  return 0;
}
