#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
// Algorithms
using namespace std;

// self defined comparator
bool comp(pair<int, int> p1, pair<int, int> p2) {

  if (p1.second < p2.second) {
    return true;

  } else if (p1.second == p2.second) {
    if (p1.first > p2.second) {
      return true;
    }
  }

  return false;
}
int main() {

  // a[] -> {1,5,3,2}^
  // sort(a,a+4)
  //     (first position, last iterator)
  //     [start,end) // End not included.
  //     All elements in range are sorted.
  // for vectors, sort(v.begin(),v.end())
  int a[10];
  int n;
  sort(a, a + n);
  int b[5] = {1, 3, 5, 2};
  // 5 is at b+2, end is at b+4
  sort(b + 2, b + 4);
  // Desc
  sort(b + 1, b + 4, greater<int>());
  // pair array c
  pair<int, int> c[] = {{1, 2}, {2, 1}, {4, 1}};
  sort(c, c + n, comp);
  return 0;
}
