#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

int main() {

  stack<int> st; // LIFO - Last In First Out
  st.push(1);    // {1}
  st.push(2);    // {2,1}
  st.push(3);    // {3,2,1}
  st.push(3);    // {3,3,2,1}
  st.emplace(5); // {5,3,3,2,1}

  cout << st.top(); // prints 5 but does not delete element

  st.pop(); // st looks like {3 3 2 1}

  cout << st.size();  // 4
  cout << st.empty(); // False

  stack<int> st1, st2;
  st1.swap(st2);
  return 0;
}
