#include "stdlib.h"
#include <stdio.h>
void PrintHello(char *name) { printf("Hello %s\n", name); }
int Add(int a, int b) { return a + b; }
int main(int argc, char *argv[]) {
  void (*ptr)(char *);
  ptr = PrintHello;
  ptr("Tom");
  return 0;
}
