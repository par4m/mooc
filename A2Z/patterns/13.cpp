#include <bits/stdc++.h>

/* Pattern 13
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
 */

using namespace std;

void Pattern(int N) {
  int n = 1;
  for (int i = 1; i <= N; i++) {

    for (int k = 1; k <= i; k++, n++) {
      cout << n;
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
