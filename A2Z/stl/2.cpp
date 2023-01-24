#include "bits/stdc++.h"
#include <utility>
#include <vector>
using namespace std;

int main() {

  vector<int> Vector1; // declaring a vector
  Vector1.push_back(1);

  cout << Vector1[0];

  Vector1.emplace_back(2);
  cout << Vector1[1];

  vector<pair<int, int>> vecPair;
  vecPair.push_back({1, 2});
  cout << vecPair[0].first;
  cout << vecPair[0].second;

  vecPair.emplace_back(3, 4);
  cout << vecPair[1].first;
  cout << vecPair[1].second;

  return 0;
}
