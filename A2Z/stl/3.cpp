#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {

  vector<int> Vec1(5, 100);

  cout << "Printing Vec1";
  cout << " \n";
  for (int i = 0; i < 5; i++) {
    cout << Vec1[i];
    cout << " \n";
  }

  cout << "Printing V2";
  vector<int> V2(5);
  for (int i = 0; i < 5; i++) {
    cout << V2[i];
    cout << " \n";
  }

  cout << "Printing V3";
  cout << "\n";
  vector<int> V3(5, 20);
  for (int i = 0; i < 5; i++) {
    cout << V3[i];
    cout << " \n";
  }

  cout << "Printing V4";
  cout << "\n";
  vector<int> V4(V3);
  for (int i = 0; i < 5; i++) {
    cout << V4[i];
    cout << " \n";
  }

  return 0;
}
