#include <bits/stdc++.h>

/* Pattern 17
     A
    ABA
   ABCBA
  ABCDCBA
 */

using namespace std;

void Pattern(int N) {

  // Outer
  for (int i = 1; i <= N; i++) {

    char c = 'A';
    int breakpoint = (2 * i + 1) / 2;

    // Space
    for (int k = 0; k < N - i - 1; k++) {
      cout << " ";
    }

    // Inner chars
    for (int j = 1; j <= 2 * i + i; j++) {
      cout << c;
      if (j <= breakpoint) {
        c++;
      } else {
        c--;
      }
    }

    //
    for (int l = 0; l < N - i - 1; l++) {
      cout << " ";
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
