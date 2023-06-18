#include <stdio.h>
#include <stdlib.h>

int *Add(int *a, int *b) { // Called Function - returns pointer to integer
  // a and b are pointer to integers local to Add
  printf("Address of a in Add = %d\n", &a);
  printf("Value of a in Add = %d\n", a);
  int c = *a + *b;
  return &c;
}

int main(int argc, char *argv[]) { // Calling Function

  int a = 2;
  int b = 4;
  printf("Address of a in main = %d\n", &a);
  // Call By Value
  int *ptr = Add(&a, &b); // value in a of main is copied to a of Add
  // value in b of main is copied to b of Add
  printf("Sum  = %d\n", *ptr);

  return 0;
}
