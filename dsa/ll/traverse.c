#include "stdio.h"
#include "stdlib.h"

struct node {
  int data;
  struct node *link;
};

struct node *head;

void Traverse(struct node *head) {

  int ctr = 0;
  struct node *temp = head;
  if (head == NULL) {
    printf("0 Nodes");
    return;
  }
  while (temp != NULL) {
    ctr++;
    printf("%d", temp->data);
    temp = temp->link;
  }
  printf(" No of Nodes are %d\n", ctr);
}

void Insert(struct node *head, int data) {
  struct node *current = (struct node *)malloc(sizeof(struct node));
  current->data = data;
  current->link = NULL;
  if (head == NULL) {
    head = current;
    return;
  }
  struct node *temp = head;
  while (temp->link != NULL) {
    temp = temp->link;
  }
  temp->link = current;
}

// void Print(struct node *head) {}

int main(int argc, char *argv[]) {
  head = NULL;
  // Traverse(head);
  Insert(head, 5);
  // Insert(head, 6);
  // Insert(head, 6);
  // Insert(head, 7);
  Traverse(head);
  return 0;
}
