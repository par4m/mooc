#include "stdlib.h"
#include <stdio.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *top = NULL; // empty stack

void Push(int x) {
  printf("Pushing: %d\n", x);
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
  temp->data = x;
  if (top == NULL) {
    top = temp;
  }
  temp->next = top;
  top = temp;
}

void Pop() {
  struct Node *temp;
  if (top == NULL) {
    printf("Stack Is Empty\n");
    return;
  }
  printf("Popping: %d\n", top->data);
  temp = top;
  top = top->next;
  free(temp);
}

void Print() {
  printf("Stack: ");
  struct Node *temp1;
  temp1 = top;
  while (temp1 != NULL) {
    printf("%d ", temp1->data);
    temp1 = temp1->next;
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  top = NULL;
  Push(2);
  Print();
  // Push(5);
  // Print();
  // Pop();
  // Print();
  return 0;
}
