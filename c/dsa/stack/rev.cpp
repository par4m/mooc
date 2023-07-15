#include <bits/stdc++.h>
using namespace std;

void Reverse(char C[], int n) {

  stack<char> S;
  // Loop for push ;; each char into S
  for (int i = 0; i < n; i++) {
    S.push(C[i]);
  }
  // Change C[i] with each Pop
  for (int i = 0; i < n; i++) { // overrwrite the char at index i
    C[i] = S.top();             // Get Top
    S.pop();                    // remove top and move to next
  }
}

int main(int argc, char *argv[]) {

  char C[51];
  cout << " Enter the String ";
  cin >> C;
  Reverse(C, strlen(C));
  cout << " Output =  " << C;

  return 0;
}
