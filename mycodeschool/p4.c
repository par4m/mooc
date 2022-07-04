#include <stdio.h>

int main (int argc, char *argv[])
{
  int a; // variable declaration
  int *p; // declaration
  a = 10; // initialisation
  p = &a; // &a = address of a 
  printf("Address of a is %d\n", p);
  printf("Value of a is %d\n", *p);
  int b = 20;
  *p = b;
  printf("New value of a is %d\n", *p);
  printf("Address of a is %d\n", p);
  return 0;
}
