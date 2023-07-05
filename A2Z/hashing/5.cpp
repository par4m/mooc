#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
#endif // !ONLINE_JUDGE

  string arr = "abababacde";
  // pre compute
  map<char, int> mpp;
  for (int i = 0; i < arr.length(); i++) {
    mpp[arr[i]]++;
  }

  for (auto it : mpp) {
    cout << it.first << " -> " << it.second << " \n";
  }

  int q;
  cin >> q;
  while (q--) {
    char number;
    cin >> number;
    // fetch
    cout << mpp[number] << "\n";
  }
  return 0;
}
