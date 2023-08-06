#include <iostream>

// selection_sort

using namespace std;

void selection_sort(int arr[], int n);

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
  selection_sort(arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

void selection_sort(int arr[], int n) {

  for (int i = 0; i <= n - 2; i++) {
    // find min
    // consider 1st element to be min
    int min = i;
    for (int j = i; j <= n - 1; j++) {
      if (arr[j] < arr[i]) { // if element is smaller than wat considered
        min = j;
      }
      int temp = arr[min];
      arr[min] = arr[i]; // at min pos arr[i] will go
      arr[i] = temp;     // at smallest pos arr[min] will come
    }
  }
}
