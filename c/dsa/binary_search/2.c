#include "stdio.h"
#include "stdlib.h"

int BinarySearch(int Arr[], int low, int high, int x) {
  if (low > high) {
    return -1;
  }

  int mid = low + (high - low) / 2;
  if (x == Arr[mid]) {
    return mid;
  } else if (x < Arr[mid]) {
    return BinarySearch(Arr, low, mid - 1, x);
  } else {
    return BinarySearch(Arr, mid + 1, high, x);
  }
}

int main() {

  int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int low = 0;
  int high = sizeof(A) / 4;
  int x;
  printf("Enter Number to Search: ");
  scanf("%d", &x);
  printf("\n");
  int index = BinarySearch(A, low, high, x);
  if (index != -1) {
    printf("Element %d Found At Index : %d", x, index);
  } else {
    printf("Number %d not found ", x);
  }

  return 0;
}
