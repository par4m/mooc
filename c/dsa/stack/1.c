#include "stdio.h"
#include "stdlib.h"

#define MAX_SIZE 101

int A[MAX_SIZE];

int top = -1; // empty stack

void Push(int x) {
  if (top == MAX_SIZE - 1) {
    printf("Error: Stack Overflow\n");
    return;
  }
  top++;
  A[top] = x;
  printf("Pushing %d\n", x);
  // A[++top] = x
}

void Pop() {
  if (top == -1) {
    printf("Stack Already Empty\n");
    return;
  }
  printf("Popping %d \n", A[top]);
  top--;
}

void Print() {
  printf("Stack: ");
  for (int i = 0; i <= top; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");
}

int Top() { return A[top]; }

int main(int argc, char *argv[]) {

  Push(2);
  Print();
  Push(5);
  Print();
  Push(10);
  Print();
  Pop();
  Print();
  Push(12);
  Print();

  return 0;
}
