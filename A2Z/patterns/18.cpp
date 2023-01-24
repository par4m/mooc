#include <bits/stdc++.h>

/* Pattern 18

 */

using namespace std;

void Pattern(int N) {

  for (int i = 0; i < N; i++) {

    for (char C = 'E' - i; C <= 'E'; C++) {
      cout << C;
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
