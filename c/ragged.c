#include "stdio.h"

// # 1
// # 1 2
// # 1 2 3
// # 1 2 3 4

void Display(int **arr, int rows, int cols);

int main(int argc, char *argv[]) {
  int arr[5] = {1, 2, 3, 4, 5};
  printf("%d\n", &arr[0]);
  int *p = arr;
  printf("%d", *p);
  // int *z = &q;
  // printf("\n");
  // printf("%d\n", z);
  // printf("%d", &q);

  for (int i = 0; i < 5; i++) {
    printf("%d", *(p + i));
  }

  return 0;
}
