#include <bits/stdc++.h>

/* Pattern 7

                       *
                                  ***
                                 *****
                                *******
                         *********

*/

using namespace std;

void Pattern(int N) {

  // Outer Loop
  for (int i = 0; i < N; i++) {

    // space
    for (int j = 0; j < N - i - 1; j++) {
      cout << " ";
    }

    // star
    for (int k = 0; k < 2 * i + 1; k++) {
      cout << "*";
    }

    // space
    for (int j = 0; j < N - i - 1; j++) {
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
