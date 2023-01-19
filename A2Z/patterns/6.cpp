#include <bits/stdc++.h>

/* Pattern 6

12345
1234
123
12
1

*/

using namespace std;

void Pattern(int N) {

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N - i + 1; j++) {
      cout << j << " ";
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
