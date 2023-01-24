#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {

  vector<int> v(5, 10);

  vector<int>::iterator ItrForV = v.begin();

  cout << *(ItrForV) << " ";

  ItrForV++;
  cout << *(ItrForV) << " ";

  ItrForV = ItrForV + 2; // 10; at index 3
  cout << *(ItrForV) << " ";

  vector<int>::iterator it = v.end();
  cout << *(it);
  it--;
  cout << *(it);

  cout << v[0] << " " << v.at(0);

  cout << v.back() << " ";
  return 0;
}
