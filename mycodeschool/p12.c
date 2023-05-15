#include <stdio.h>

int main() {

  int x = 5;
  int *p;
  p = &x;
  printf("Address of x is %d and value of x is %d\n", p, *p);
  *p = 6;
  //
  int **q; // pointer to pointer
  q = &p;
  printf("Address of p is %d and value it points to is %d\n", q, **q);
  printf("Address of q is %d and value it points to is %d\n", &q, **q);
  //
  int ***r; // pointer to a pointer to a pointer
  r = &q;
  printf("Address of q is %d and value it points to is %d\n", r, ***r);
  printf("Address of r is %d and value it points to is %d\n", &r, ***r);
  return 0;
}
