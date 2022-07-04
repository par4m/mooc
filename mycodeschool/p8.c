#include <stdio.h>

int main() {


  int a = 10;
  int* p;
  p = &a;
  printf("Address of a is %p\n", &a);
  printf("Address of a is %d\n", &a);
  printf("Address of a is %p\n", p);
  printf("Address of a is %d\n", p);
  return 0;
}
