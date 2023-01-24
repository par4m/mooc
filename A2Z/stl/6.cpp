#include "bits/stdc++.h"
#include <vector>
using namespace std;

int main() {

  vector<int> v(2, 100);
  v.insert(v.begin(), 300);       // 300,100,100
                                  //
  v.insert(v.begin() + 1, 2, 10); // 300,10,10,100,100

  vector<int> copy(2, 50);
  v.insert(v.begin(), copy.begin(), copy.end()); // {50,50,300,10,10,100,100}
  cout << v.size();
  return 0;
}
