#include <stdio.h>


int main ()
{
  
  int a; // integer
  a = 10;
  int *p; // pointer to integer
  p = &a; // &a  = address of a 
  printf(" Address of a is : %d\n", p);
  printf(" Value of a is : %d\n", *p);
  *p = 11; // dereferencing
  printf(" New Value of a is : %d\n", *p);
  return 0;
}

