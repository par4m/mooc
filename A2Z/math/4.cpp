#include <bits/stdc++.h>
using namespace std;
int main() {
  // Reverse Num
  int num;
  cout << "Enter a number : ";
  cin >> num;
  cout << "Entered number is " << num;
  cout << "\n";
  int num1 = num;
  int num2 = num;
  int lastDigit;
  int ctr = 0;
  int sum = 0;
  // for getting no of digits
  while (num != 0) {
    lastDigit = num % 10;
    ctr++;
    num = num / 10;
  }
  cout << "No of digits " << ctr;
  while (num1 != 0) {
    lastDigit = num1 % 10;
    sum += pow(lastDigit, ctr);
    num1 = num1 / 10;
  }
  cout << "\n";
  cout << "Sum is " << sum;
  return 0;
}
