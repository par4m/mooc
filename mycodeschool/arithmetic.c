#include <stdio.h>

int main() {

  int a,b,sum,diff,product,quotient,remainder; // declaration

  printf("Enter a: ");
  scanf("%d", &a);
  printf("Enter b: ");
  scanf("%d", &b);

  sum = a + b; // initialisation
  printf("a+b is %d\n", a+b);

  diff = a - b;
  printf("a-b is %d\n", a-b);

  product = a*b;
  printf("a*b is %d\n", a*b);

  quotient = a/b;
  printf("a/b = %d\n", a/b);

  remainder = a%b;
  printf("a%%b = %d\n", a%b);

  return 0;
}
