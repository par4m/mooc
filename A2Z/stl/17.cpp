#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
  // Gives Binary of an Integer
  int num = 7;
  int cnt = __builtin_popcount(num);

  long long num1 = 165786578687;
  int cnt1 = __builtin_popcountll(num1);

  string s = "123";
  sort(s.begin(), s.end());
  do {
    cout << s << endl;
  } while (next_permutation(s.begin(), s.end()));

  // Max element
  int maxi = *max_element(a, a + n);
  return 0;
}
