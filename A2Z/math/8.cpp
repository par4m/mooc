#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  int ctr = 0;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      ctr++;
      if (n / i != i) {
        ctr++;
      }
    }
  }
  if (ctr == 2) {
    cout << "true";
  } else {
    cout << " false";
  }

  return 0;
}
