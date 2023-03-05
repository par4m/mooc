#include <bits/stdc++.h>
#include <map>

using namespace std;
int main() {

  map<int, int> mpp;

  map<int, pair<int, int>> mpp1; // key is int, value is 2 int

  map<pair<int, int>, int> mpp2; // key is 2 ints , value is 1 int

  mpp[1] = 2;
  mpp.emplace({3, 1});

  return 0;
}
