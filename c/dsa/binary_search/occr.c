#include <stdbool.h>
#include <stdio.h>

int FirstLast(int A[], int n, int x, bool searchFirst) {
  int low = 0;
  int high = n - 1;
  int result = -1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (x == A[mid]) {
      result = mid;
      if (searchFirst) {
        high = mid - 1; // GO on Searching towards left (lower indices)
      } else {
        low = mid + 1; // Search towards right (higher indices)
      }
    } else if (x < A[mid]) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return result;
}

int main(int argc, char *argv[]) {

  int A[] = {1, 1, 3, 3, 5, 5, 5, 5, 5, 9, 9, 11};
  int x; // element to search for
  printf("Enter a number : ");
  scanf("%d", &x);
  printf("\n");
  int firstIndex = FirstLast(A, sizeof(A) / sizeof(A[0]), x, true);
  int lastIndex = FirstLast(A, sizeof(A) / sizeof(A[0]), x, false);
  printf("No. of Occurances of %d are %d", x, lastIndex - firstIndex + 1);

  return 0;
}
