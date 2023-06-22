#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  vector<int> v;
  int n;
  cin >> n;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      v.push_back(i);
      if (n / i != i) {
        v.push_back(n / i);
      }
    }
  }
  sort(v.begin(), v.end());
  for (int x : v) {
    cout << x << " ";
  }
  cout << " \n";
  // OR
  for (auto it : v) {
    cout << it << " ";
  }
  return 0;
}
