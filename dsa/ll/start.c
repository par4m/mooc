#include "stdio.h"
#include "stdlib.h"

struct node {
  int data;
  struct node *link;
};

struct node *InsertAtFront(struct node *head, int data) {
  struct node *current = (struct node *)malloc(sizeof(struct node));
  current->data = data;
  if (head == NULL) {
    return current;
  }
  current->link = head;
  struct node *prevHead = head;
  head = current;
  return head;
}

void Print(struct node *head) {
  struct node *temp = head;
  while (temp != NULL) {
    printf("%d", temp->data);
    temp = temp->link;
  }
}

int main(int argc, char *argv[]) {

  struct node *head = (struct node *)malloc(sizeof(struct node));
  head->link = NULL;
  head->data = 45;
  head = InsertAtFront(head, 100);
  head = InsertAtFront(head, 150);
  Print(head);

  return 0;
}
