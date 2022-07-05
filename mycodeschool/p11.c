#include <stdio.h>

int main() {
  
  int a = 1025;
  int *p;
  p = &a;
  printf("size of integer is %d bytes\n", sizeof(int));
  printf("Address = %d, value = %d\n", p, *p);
  // Void pointer - Generic pointer -> cannot be derefenrenced -> only address can be printed and no pointer arthmetic possible
  void *p0; 
  p0 = p;
  printf("Address = %d and value = %d \n", p0);
  return 0;
}
