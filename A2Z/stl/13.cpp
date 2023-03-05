#include <bits/stdc++.h>

using namespace std;
int main() {

  multiset<int> ms;
  ms.insert(1); // {1}
  ms.insert(1); // {1,1}
  ms.insert(1); // {1,1,1}

  ms.erase(1); // all 1's are erased
               //
  ms.insert(1);
  ms.insert(1);
  int cnt = ms.count(1);

  // erase multiple
  ms.erase(ms.find(1), ms.find(1));

  cout << cnt;
  return 0;
}
