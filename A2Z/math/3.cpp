#include <bits/stdc++.h>
using namespace std;
int main() {
  // Reverse Num
  int num;
  int revNum = 0;
  int og;
  cout << "Enter a number : ";
  cin >> num;
  cout << "Entered number is " << num;
  cout << "\n";
  og = num;
  int lastDigit;
  while (num != 0) {
    lastDigit = num % 10;
    revNum = (revNum * 10) + lastDigit;
    num = num / 10;
  }
  if (revNum == og) {
    cout << "Palindrome";
  }
  return 0;
}
