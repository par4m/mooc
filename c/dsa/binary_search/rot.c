#include "stdio.h"

int FindRoationCount(int A[], int n) {
  int low = 0, high = n - 1;
  while (low <= high) {
    if (A[low] <= A[high]) { // Case 1
      return low;
    }
    int mid = (low + high) / 2;
    int next = (mid + 1) % n;
    int prev = (mid + n - 1) % n;
    if (A[mid] <= A[next] && A[mid] <= A[prev]) {
      return mid; // Case 2
    } else if (A[mid] <= A[high]) {
      high = mid - 1; // Case 3
    } else if (A[mid] >= A[low]) {
      low = mid + 1; // case 4
    }
  }
  return -1;
}

int main() {

  int A[] = {15, 22, 23, 28, 31, 38, 5, 6, 7, 10, 12};
  int B[] = {1, 2, 3, 4, 5};
  int count = FindRoationCount(A, 11);
  int count2 = FindRoationCount(B, 5);
  printf("the array A is rotated %d times\n", count);
  printf("the array B is rotated %d times\n", count2);
  return 0;
}

