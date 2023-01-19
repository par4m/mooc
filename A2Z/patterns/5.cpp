#include <bits/stdc++.h>

/* Pattern 5

*****
****
***
**
*

*/

using namespace std;

void Pattern(int N) {

  for (int i = 1; i <= N; i++) {
    for (int j = 0; j < N - i + 1; j++) {
      cout << "*";
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
