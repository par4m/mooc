#include <bits/stdc++.h>

/* Pattern 8


 ******
 *****
 ****
 ***
 *


 */

using namespace std;

void Pattern(int N) {

  // Outer Loop
  for (int i = 0; i < N; i++) {

    // Inner Loop 1 - Space
    for (int j = 0; j <= i; j++) {
      cout << " ";
    }

    // Inner Loop - Star
    for (int k = N - 1 - i; k >= 0; k--) {
      cout << "*";
    }

    // Inner Loop 2 - Space
    for (int k = 0; k <= i; k++) {
      cout << " ";
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
