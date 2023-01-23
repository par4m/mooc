#include <bits/stdc++.h>

/* Pattern 12
1     1
12   21
123 321
 */

using namespace std;

void Pattern(int N) {

  // Outer Loop

  for (int i = 1; i <= N; i++) {
    int j;

    for (j = 1; j <= i; j++) {
      cout << j;
    }

    // Inner Space
    for (int k = 2 * N - 2 * i; k > 0; k--) {
      cout << " ";
    }

    for (j = j - 1; j >= 1; j--) {
      cout << j;
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
