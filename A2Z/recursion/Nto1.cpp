#include <bits/stdc++.h>
using namespace std;
void N_print(int n) {
  if (n == 0) {
    return;
  }
  cout << n << " \n";
  return N_print(n - 1);
}

int main(int argc, char *argv[]) {

  N_print(5);

  return 0;
}
