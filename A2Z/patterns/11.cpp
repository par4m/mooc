#include <bits/stdc++.h>

/* Pattern 11

 */

using namespace std;

void Pattern(int N) {

  int start = 1;
  // Outer Loop
  for (int i = 0; i <= N; i++) {
    if (i % 2 == 0) {
      start = 1;
    } else {
      start = 0;
    }
    for (int j = 0; j < i; j++) {
      cout << start;
      start = 1 - start;
    }

    cout << " \n";
  }
}

int main() {

  int N;
  cin >> N;
  Pattern(N);
  return 0;
}
