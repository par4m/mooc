#include <stdio.h>

#define MAX_STACK_SIZE 100
#define MAX_EXPR_SIZE 100

typedef enum {
  lparen,
  rparen,
  plus,
  minus,
  times,
  divide,
  mod,
  eos,
  operand
} precedence;

int stack[MAX_STACK_SIZE]; // global stack
char expr[MAX_STACK_SIZE];
// operand (number) - ascii(0) = int version of operand

// We use an auxiliary function, get-token (Program 3.10), to obtain tokens from
// the expression string. If the token is an operand, we convert it to a number
// and add it to the stack. Otherwise, we remove two operands from the stack,
// perform the specified opera tion, and place the result back on the stack.
// When we have reached the end of expres sion, we remove the result from the
// stack
//
int main(int argc, char *argv[]) { return 0; }
