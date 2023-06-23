#include <bits/stdc++.h>
using namespace std;

void revArray(int i, int arr[], int n) {

  if (i >= n / 2) {
    return;
  }
  swap(arr[i], arr[n - i - 1]);
  revArray(i + 1, arr, n);
}

int main(int argc, char *argv[]) {
  int temp;
  int A[5] = {1, 2, 3, 4, 5};
  int r = 4;
  for (int i = 0; i < 5 / 2; i++) {
    temp = A[r];
    A[r] = A[i];
    A[i] = temp;
    r--;
  }
  for (int i = 0; i < 5; i++) {
    cout << A[i] << "\n";
  }
  revArray(0, A, 5);
  for (int i = 0; i < 5; i++) {
    cout << A[i] << "\n";
  }
  return 0;
}
