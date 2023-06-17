#include <stdio.h>

int main() {

  int x = 5;
  int *p = &x;
  printf("Address of x is  %d\n", p);
  *p = 6;
  printf("Value of x has changed to %d\n", x);

  int **q; // pointer to (pointer to integer)
  q = &p;

  printf("address of p is %d\n", *q);  // addr of p = p = addr p points to
  printf("value of p is %d\n", *(*q)); // value of p = 6 = *p = x

  int ***r = &q; // pointer to (pointer to (pointer to integer))
  printf("Address of q is %d\n",
         *(*r)); // addr that q pts to = addr p pts to = addr of x
  printf("Value at addr : %d\n",
         *(*(*r))); // val at addr r pts to = val at addr q pts = val at addr p
                    // pts to = val of x
  ***r = 10;
  printf("Value in x is %d\n", x);  // 10
  **q = *p + 2;                     // x is now 10 + 2
  printf("Value of x is %d \n", x); // 12
  return 0;
}
