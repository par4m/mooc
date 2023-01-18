#include <bits/stdc++.h>
#include <cstdio>

/* Pattern 2

*
**
***
****
*****

*/

using namespace std;

void Pattern(int N) {

  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= i; j++) {
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
