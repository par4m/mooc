#include <bits/stdc++.h>

/* Pattern 15

 */

using namespace std;

void Pattern(int N) {

  for (int i = N; i >= 1; i--) {

    char c = 'A';
    for (int j = 1; j <= i; j++) {
      cout << c;
      c = c + 1;
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
