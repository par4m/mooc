#include <bits/stdc++.h>

/* Pattern 21

*/

using namespace std;

void Pattern(int N) {

  for (int i = 0; i < N; i++) {

    for (int j = 0; j < N; j++) {
      if (i == 0 || j == 0 || i == N - 1 || j == N - 1) {
        cout << "*";
      } else
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
