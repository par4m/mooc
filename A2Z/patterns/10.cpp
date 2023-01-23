#include <bits/stdc++.h>

/* Pattern 10

 */

using namespace std;

void Pattern(int N) {

  // Outer Loop 1
  for (int i = 0; i < N; i++) {

    // // Space 1
    // for (int j = N - 1; j >= 0; j--) {
    //   cout << " ";
    // }
    // Star 1

    for (int k = 0; k < 2 * i + 1; k++) {
      cout << "*";
    }
    // Space 2
    for (int j = N - 1; j >= 0; j--) {
      cout << " ";
    }
    cout << "\n";
  }

  // Outer Loop 2
  for (int i = 1; i < N; i++) {

    // // Inner Loop 1 - Space
    // for (int j = 0; j <= i; j++) {
    //   cout << " ";
    // }

    // Inner Loop - Star 2
    for (int k = 2 * N - 1 - (2 * i + 1); k >= 0; k--) {
      cout << "*";
    }

    // Inner Loop - Space 2
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
