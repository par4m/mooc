#include <stdio.h>

void Intecrement(int *a) {
  *a = *a + 1;
  printf("Address of variable a in Increment = %d\n", a);
}
int main() {

  int a;
  a = 10;
  Intecrement(&a);       // a = a+1
  printf("a = %d\n", a); // 11 ??
  printf("Address of variable a in main = %d\n", &a);

  return 0;
}
