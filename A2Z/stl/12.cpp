#include <bits/stdc++.h>

using namespace std;

int main() {

  set<int> st;
  st.insert(1);  // {1}
  st.emplace(2); // {1,2}
  st.insert(2);  // {1,2,4}
  st.insert(4);  // {1,2,3,4}
  st.insert(3);  // { 1,2,3,4}
                 //
  // {1,2,3,4,5}
  auto it = st.find(3); // returns an iterator
                        //
  // {1,2,3,4,5}
  auto it2 = st.find(6);
  //
  st.erase(5); // erases 5 // takes logarithmic time
               //
  int cnt = st.count(1);

  return 0;
}
