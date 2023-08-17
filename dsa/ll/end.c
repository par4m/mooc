#include "stdio.h"
#include <stdlib.h>

struct node {
  int data;
  struct node *link;
};

void InsertAtEnd(struct node *head, int data) {
  struct node *current = (struct node *)malloc(sizeof(struct node));
  current->data = data;
  current->link = NULL;
  if (head->link == NULL) {
    head->link = current;
    return;
  }
  struct node *temp = head;
  while (temp->link != NULL) {
    temp = temp->link;
  }
  temp->link = current;
}

void Print(struct node *head) {
  if (head == NULL) {
    return;
  }
  struct node *temp = head->link;
  while (temp != NULL) {
    printf("%d", temp->data);
    temp = temp->link;
  }
}

int main(int argc, char *argv[]) {
  struct node *head = (struct node *)malloc(sizeof(struct node));
  head->link = NULL;
  InsertAtEnd(head, 5);
  Print(head);
  return 0;
}
