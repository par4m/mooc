#include <bits/stdc++.h>
using namespace std;

bool Palindrome(int i, string &s) {
  if (i >= s.size() / 2) {
    return true;
  }
  if (s[i] != s[s.size() - i - 1]) {
    return false;
  }
  return Palindrome(i + 1, s);
}

int main(int argc, char *argv[]) {
  string s = "racecar";
  cout << Palindrome(0, s);

  return 0;
}
