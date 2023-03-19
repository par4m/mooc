#include <bits/stdc++.h>
using namespace std;
int main() {
  // Reverse Num
  int num;
  int revNum = 0;
  cout << "Enter a number : ";
  cin >> num;
  cout << "Entered number is " << num;
  cout << "\n";
  int lastDigit;
  while (num != 0) {
    lastDigit = num % 10;
    revNum = (revNum * 10) + lastDigit;
    num = num / 10;
  }
  cout << revNum;
  return 0;
}
