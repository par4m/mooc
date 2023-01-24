#include <bits/stdc++.h> // has all the libraries, math etc

using namespace std;

void explainPair() {

  pair<int, int> p = {1, 3};
  cout << p.first;
  cout << " \n";
  cout << p.second;

  pair<int, pair<int, int>> q = {1, {3, 4}};
  cout << q.first;
  cout << " \n";
  cout << q.second.first;
  cout << " \n";
  cout << q.second.second;
  cout << "\n";
  // 0    1      2
  cout << "Printing array"
       << "\n";
  pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
  cout << arr[0].first;
  cout << " \n";
  cout << arr[0].second;
  cout << "\n";
  cout << arr[1].first;
  cout << " \n";
  cout << arr[1].second;
  cout << " \n";
  for (int i = 0; i < 3; i++) {
    cout << "Index is " << i << "\n";
    cout << "First is " << arr[i].first << " \n";
    cout << "Second is " << arr[i].second << " \n";
  }
}

int main() {

  explainPair();
  return 0;
}
