#include <stdio.h>


int main() {

  int a = 10;
  int *p;
  p = &a;
  // Pointer Arithmetic
  printf("Address of p is %d\n",p);
  printf("Value at address p is %d\n", *p);
  printf("Size of integer is %d bytes\n", sizeof(int));
  printf("Value at p+1 is %d\n", *p+1);
  return 0;
}
