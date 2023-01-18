#include <bits/stdc++.h>
#include <cstdio>

/* Pattern 3

1
12
123
1234
12345

*/

using namespace std;

void Pattern(int N) {

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= i; j++) {
      cout << j;
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
