#include <bits/stdc++.h>

/* Pattern 16
A
AB
ABC
ABCD
ABCDE
 */

using namespace std;

void Pattern(int N) {

  char c = 'A';
  for (int i = 1; i <= N; i++) {

    for (int j = 1; j <= i; j++) {
      cout << c;
    }
    c = c + 1;
    cout << " \n";
  }
}

int main() {

  int N;
  cin >> N;
  Pattern(N);
  return 0;
}
