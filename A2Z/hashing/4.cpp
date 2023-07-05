#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
#endif // !ONLINE_JUDGE

  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  // pre compute
  map<int, int> mpp;
  for (int i = 0; i < n; i++) {
    mpp[arr[i]]++;
  }

  for (auto it : mpp) {
    cout << it.first << " -> " << it.second << " \n";
  }

  int q;
  cin >> q;
  while (q--) {
    int number;
    cin >> number;
    // fetch
    cout << mpp[number] << "\n";
  }
  return 0;
}
