#include "stdio.h"
#include "stdlib.h"

struct node {
  int data;
  struct node *link;
};

void Print(struct node *head) {
  struct node *temp = head->link;
  if (head == NULL) {
    return;
  }
  while (temp != NULL) {
    printf("%d %d\n", temp->data, temp->link);
    temp = temp->link;
  }
}

void Insert(struct node *head, int data) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->data = data;
  temp->link = NULL;
  if (head == NULL) {
    head->link = temp;
    return;
  }
  struct node *temp1 = head;
  while (temp1->link != NULL) {
    temp1 = temp1->link;
  }
  temp1->link = temp;
}

// void Insert(struct node *head, int n) {}

int main(int argc, char *argv[]) {
  struct node *head = (struct node *)malloc(sizeof(struct node));
  // head->data = 5;
  head->link = NULL;
  Insert(head, 6);
  Insert(head, 8);
  Print(head);

  return 0;
}
