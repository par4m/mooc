
#include "stdio.h"
#include <stdlib.h>

void A() { printf("hello \n"); };
void B(void (*ptr)()) { // function pointer as argument
  ptr();                // callback function  that ptr points to
};
int main(int argc, char *argv[]) {

  void (*p)() = A;
  B(p); // hello
  B(A); // hello // A is callback function

  return 0;
}
