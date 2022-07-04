#include <stdio.h>

int main (int argc, char *argv[])
{
  int a;
  a = 5;
  int *P; // *P is pointer; *P has value of address
  P = &a; // P has address of a -> referencing 
  printf("Address of a is %p\n", P);
  printf("Address of a is %p\n", &a);
  printf("Address of P is %p\n", &P); // P is also stored in memory at a different location
  printf("Value of a that P points to is %d\n", *P); // *P has value of a -> dereferencing; gives value at the location it points to
  *P = 6; // Changed value of a to 6 as *P is value of a
  printf("New value of a is %d\n", a);
  return 0;
}
