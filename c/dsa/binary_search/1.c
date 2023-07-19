#include "stdio.h"
#include "stdlib.h"

int BinarySearch(int Arr[], int n, int x) {

  int start = 0;
  int end = n - 1;
  while (start <= end) {
    int mid = (start + end) / 2;
    if (x == Arr[mid]) {
      return mid;              // Found X, return (exit)
    } else if (x < Arr[mid]) { // x lies before mid
      end = mid - 1;
    } else { // x lies after mid
      start = mid + 1;
    }
  }
  return -1;
}

int main() {

  int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int x;
  printf("Enter Number to Search: ");
  scanf("%d", &x);
  printf("\n");
  int index = BinarySearch(A, (sizeof(A) / 4), x);
  if (index != -1) {
    printf("Element %d Found At Index : %d", x, index);
  } else {
    printf("Number %d not found ", x);
  }

  return 0;
}
