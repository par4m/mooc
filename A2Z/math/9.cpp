#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  int n1 = 9;
  int n2 = 12;
  int gcd = 0;
  int lesser = n1 < n2 ? n1 : n2;
  for (int i = 1; i <= sqrt(lesser); i++) {
    if (n1 % i == 0 && n2 % i == 0) {
      if (i > gcd) {
        gcd = i;
      }
    }
  }
  cout << gcd;

  return 0;
}
