#include <stdio.h>

int main() {

  int a, b,c; // declaration
  printf("Enter a: ");
  scanf("%d", &a);
  printf("Enter b: ");
  scanf("%d", &b);
  c = a*b;
  printf("a = %d, b = %d, a*b = %d\n", a, b, c);
  return 0;
}
