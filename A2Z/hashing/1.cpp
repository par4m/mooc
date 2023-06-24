#include <bits/stdc++.h>
using namespace std;

int hashh[10000000]; // 10e7
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
#endif // !ONLINE_JUDGE
  int n;
  cout << "Enter Size of Array : ";
  cin >> n;
  // Taking input to array
  int arr[n];
  for (int i = 0; i < n; i++) {
    cout << "Enter Element " << i << " : \n";
    cin >> arr[i];
  }
  // printing the array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " \n";
  } // 1 3 2 1 3
  // taking number of inputs
  // pre-compute
  int hash[13] = {0};
  for (int i = 0; i < n; i++) {
    hash[arr[i]] += 1;
  }

  int q; // No. of elements to search for:
  cout << "Number of elements to search for: ";
  cin >> q;
  cout << " \n";
  while (q--) {
    int number;
    cout << "Enter element to search for: ";
    cin >> number;
    cout << "\n";
    // fetch
    cout << "No of times " << number << " occurs is : ";
    cout << hash[number] << " \n";
  }

  return 0;
}
