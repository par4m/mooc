#include "stdio.h"
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *head; // global variable

struct Node *Insert(struct Node *head, int data) {

  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
  temp->data = data;
  temp->next = NULL;
  if (head == NULL) {
    head = temp;
  } else {
    struct Node *temp1 = head;
    while (temp1->next != NULL) {
      temp1 = temp1->next;
    }
    temp1->next = temp;
  }
  return head;
}

void Reverse(struct Node *p) {
  if (p->next == NULL) { // EXIT Condition
    head = p;
    return;
  }
  Reverse(p->next); // Recursive Call
  struct Node *q = p->next;
  q->next = p;
  p->next = NULL;
}

int main(int argc, char *argv[]) {
  head = NULL;
  head = Insert(head, 2);
  head = Insert(head, 4);
  head = Insert(head, 6);
  head = Insert(head, 8);
  Reverse(head);

  return 0;
}
