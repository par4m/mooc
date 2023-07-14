#include "stdio.h"
#include "stdlib.h"

struct Node {
  int data;
  struct Node *next;
  struct Node *prev;
};

struct Node *head; // global var- pointer to head node

struct Node *GetNewNode(int x) {

  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = x;
  newNode->prev = NULL;
  newNode->next = NULL;
  return newNode;
}

void InsertAtHead(int x) {

  struct Node *newNode = GetNewNode(x);
  if (head == NULL) {
    head = newNode;
    return;
  }
  head->prev = newNode;
  newNode->next = head;
  newNode->prev = NULL;
  head = newNode;
}

void InsertAtEnd(int x) {
  struct Node *newNode = GetNewNode(x);
  struct Node *temp1 = head;
  if (head == NULL) {
    head = newNode;
  }
  while (temp1->next != NULL) {
  }
  temp1->next = newNode;
  newNode->prev = temp1;
  newNode->next = NULL;
}

void Print() {
  struct Node *temp = head;
  printf("Forward \n");
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

void ReversePrint() {
  struct Node *temp = head;
  printf("Backward \n");
  if (temp == NULL) {
    return;
  }
  // Going to Last Node
  while (temp->next != NULL) {
    temp = temp->next;
  }
  // Traversing Backward Using Prev Pointer
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->prev;
  }
  printf("\n");
}

int main(int argc, char *argv[]) {

  head = NULL;
  InsertAtHead(2);
  Print();
  ReversePrint();

  InsertAtHead(4);
  Print();
  ReversePrint();

  InsertAtHead(6);
  Print();
  ReversePrint();

  InsertAtHead(8);
  Print();
  ReversePrint();

  return 0;
}
