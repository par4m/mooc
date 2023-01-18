#include <bits/stdc++.h>
#include <cstdio>

/* Pattern 4

1
22
333
4444
55555

*/

using namespace std;

void Pattern(int N) {

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= i; j++) {
      cout << i;
    }
    cout << "\n";
  }
}

int main() {

  int N;
  cin >> N;
  Pattern(N);
  return 0;
}
