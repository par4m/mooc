#include <stdio.h>

void Reverse(int *arr, int n) {

  int *start = arr;
  int *end = arr + n - 1;
  for (int i = 0; i < n / 2; i++) {
    int temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
}

int main(int argc, char *argv[]) {
  int n = 10;
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  Reverse(arr, 10);

  for (int i = 0; i < n; i++) {
    printf("%d\t", arr[i]);
  }

  return 0;
}
