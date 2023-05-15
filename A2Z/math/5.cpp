#include <bits/stdc++.h>
using namespace std;
int main() {

  int num;
  cout << "Enter a num : ";
  cin >> num;
  for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
      cout << "Divisible by " << i;
      cout << " \n";
    }
  }
  return 0;
}
