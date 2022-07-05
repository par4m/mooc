#include <stdio.h> // pre processor

int main() {
  int a = 1025;
  int *p;
  p = &a;
  printf("size of integer is %d bytes\n", sizeof(int));
  printf("Address = %d, value = %d\n", p, *p);
  //
  printf("Address = %d, value = %d\n", p+1, *(p+1));
  char *p0;
  p0 = (char*)p; // typecasting // pointer to integer to pointer to char
  printf("Size of char is %d\n", sizeof(char));
  printf("Address = %d, value = %d\n", p0, *p0);
  //
  printf("Address = %d, value = %d\n", p0+1, *(p0+1));
  return 0; // 0 is success rest is failure
}
