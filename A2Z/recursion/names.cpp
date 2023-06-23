#include <bits/stdc++.h>
using namespace std;
void print_names(int n) {
  if (n == 0) {
    return;
  }
  cout << "Names"
       << " \n";
  print_names(n - 1);
}

int main(int argc, char *argv[]) {

  print_names(5);

  return 0;
}
