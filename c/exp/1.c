#include <stdio.h>

// We can describe an algorithm for producing a postfix expression from an infix
// one as fol lows:
// (1) Fully parenthesize the expression.
// (2) Move all binary operators so that they replace their corresponding right
// parentheses.
// (3) Delete all parentheses
int main(int argc, char *argv[]) {
  int a;
  a = '1';
  printf("%d", a - '0');
  return 0;
}
