#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  vector<int> prime(n + 1, 1);
  prime[1] = 0;
  for (int i = 2; i <= n; i++) {
    if (!prime[i])
      continue;
    for (int j = i * i; j <= n; j += i) {
      prime[j] = 0;
    }
  }

  return 0;
}
