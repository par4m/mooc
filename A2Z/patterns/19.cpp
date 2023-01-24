#include <bits/stdc++.h>

/* Pattern 19
**********
****  ****
***    ***
**      **
*        *

*/

using namespace std;

void Pattern(int N) {

  for (int i = N; i > 0; i--) {

    for (int j = 1; j <= i; j++) {
      cout << "*";
    }

    // Space
    for (int k = 1; k <= 2 * N - (2 * i); k++) {
      cout << " ";
    }

    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << "\n";
  }

  for (int i = 1; i <= N; i++) {
    int j;

    for (j = 1; j <= i; j++) {
      cout << "*";
    }

    // Inner Space
    for (int k = 2 * N - 2 * i; k > 0; k--) {
      cout << " ";
    }

    for (j = j - 1; j >= 1; j--) {
      cout << "*";
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
