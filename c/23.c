#include "stdlib.h"
#include <stdio.h>

int Add(int a, int b) { return a + b; }
int main(int argc, char *argv[]) {
  int c;
  // ptr to function that should take
  // (int,int) as argument/parameter and return int
  int (*p)(int, int); // first int should be return type of function
  p = &Add;           // or A
  c = (*p)(2, 3);     // de-referencing and executing the function // or p(2,3)
  printf("%d\n", c);
  return 0;
}
