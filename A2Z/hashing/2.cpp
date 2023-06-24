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
  char arr[n];
  for (int i = 0; i < n; i++) {
    cout << "Enter Element " << i << " : ";
    cin >> arr[i];
    cout << " \n";
  }
  // printing the array
  for (int i = 0; i < n; i++) {
    cout << int(arr[i]) << " \n";
  } // a b c d e

  // taking number of inputs
  // pre-compute
  int hash[26] = {0};
  for (int i = 0; i < n; i++) {
    hash[int(arr[i]) - 97] += 1;
  }

  for (int i = 0; i < 26; i++) {
    cout << hash[i] << " ";
  }
  cout << "\n";

  int q; // No. of characters to search for
  cout << "Number of elements to search for: ";
  cin >> q;
  cout << " \n";
  while (q--) {
    char c;
    cout << "Enter char to search for: ";
    cin >> c;
    cout << "\n";
    // fetch
    cout << "No of times " << c << " occurs is : ";
    cout << hash[int(c) - 97] << " \n";
  }

  return 0;
}
