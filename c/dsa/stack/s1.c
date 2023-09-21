#include <stdio.h>
// Stack using Simple Array
//
//

int A[10];
int top = -1;

void Push(int data) {
  top++;
  A[top] = data;
}

void Pop() { top--; }

int main(int argc, char *argv[]) { return 0; }
