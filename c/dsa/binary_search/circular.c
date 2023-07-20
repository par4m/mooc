#include <stdio.h>

int CircularArraySearch(int A[], int n, int x) {
  int low = 0, high = n - 1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (x == A[mid]) {
      return mid; // Case 1: Found X
    }
    if (A[mid] <= A[high]) { // Case 2: righ half is sorted
      if (x > A[mid] && x <= A[high]) {
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    } else {                            // Case 3: left half is sorted
      if (A[low] <= x && x <= A[mid]) { // go searching left
        high = mid - 1;
      } else {
        low = mid + 1; // go searching right
      }
    }
  }
  return -1;
}

int main() {

  int A[] = {12, 14, 18, 21, 3, 6, 8, 9};
  int x;
  printf("enter a number :");
  scanf("%d", &x);
  int index = CircularArraySearch(A, 8, x);
  if (index == -1) {
    printf("%d not found in the array", x);
  } else {
    printf("%d was found at the index %d", x, index);
  }

  return 0;
}
