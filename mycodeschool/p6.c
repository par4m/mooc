#include <stdio.h>

int main() {

  int a = 10;
  int *p;
  p = &a;
  // Pointer Arithmetic
  printf("%d\n", p); // if p is 2002
  printf("Size of integer is %d bytes \n", sizeof(int)); // int is 4 bytes
  printf("%d\n", p+1); // p+1 is 2006; p+2 is 2010
  return 0;
}
