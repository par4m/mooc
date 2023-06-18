#include <stdio.h>
#include <stdlib.h>

void PrintHelloWorld() { printf("Hello World\n"); }
int *Add(int *a, int *b) { // Called Function - returns pointer to integer
  int *c = (int *)malloc(sizeof(int));
  *c = *a + *b;
  return c;
}

int main(int argc, char *argv[]) {

  int a = 2;
  int b = 4;
  int *ptr = Add(&a, &b); // a and b are integers local to main
  PrintHelloWorld();
  printf("Sum = %d\n", *ptr);

  return 0;
}
