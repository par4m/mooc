#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n) {
  for (int i = 0; i <= n - 1; i++) {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
      int temp = arr[j - 1];
      arr[j - 1] = arr[j];
      arr[j] = temp;

      j--;
    }
  }
}

int main(int argc, char *argv[]) {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
#endif // !ONLINE_JUDGE
  int n = 6;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  insertion_sort(arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
