#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {

  vector<int> v(5, 20);

  for (vector<int>::iterator v1 = v.begin(); v1 != v.end(); v1++) {
    cout << *v1;
    cout << " \n";
  }

  cout << " Using vector iterator"
       << "\n";

  for (auto v1 = v.begin(); v1 != v.end(); v1++) {
    cout << *v1;
    cout << " \n";
  }

  for (auto it : v) {
    cout << it << " ";
  }

  v.erase(v.begin() + 1);

  v.erase(v.begin() + 2, v.begin() + 4);

  return 0;
}
