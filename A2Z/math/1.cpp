#include <bits/stdc++.h>
using namespace std;
// Extract Digits
int main() {

  int num;
  cout << "Enter a number : ";
  cin >> num;
  cout << "Entered number is " << num;
  cout << "\n";
  int ctr = 0;
  while (num != 0) {
    ctr++;
    cout << num << " % 10 is " << num % 10 << "\n";
    cout << num << " / 10 is " << num / 10 << "\n";
    num = num / 10;
  }
  cout << "No of digits are " << ctr;
  return 0;
}
