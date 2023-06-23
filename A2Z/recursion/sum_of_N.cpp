#include <bits/stdc++.h>
using namespace std;

int sum_N(int n) {
  if (n == 0) {
    return 0;
  }
  return (n - 1) + n;
}

void f(int n, int sum) {
  if (n < 1) {
    cout << sum;
    return;
  }
  f(n - 1, sum + n);
}

int main(int argc, char *argv[]) {

  cout << sum_N(2);
  f(2, 0);
  return 0;
}
