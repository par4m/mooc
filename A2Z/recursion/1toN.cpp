#include <bits/stdc++.h>
using namespace std;

void print_N(int n) {

  if (n == 0) {
    return;
  }
  print_N(n - 1);
  cout << n << "\n";
}

int main(int argc, char *argv[]) {

  print_N(5);

  return 0;
}
