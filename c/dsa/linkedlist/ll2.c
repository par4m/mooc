// inserting at n'th position

#include "stdio.h"
#include <stdlib.h>

struct Node {

  int data;
  struct Node *next;
};

struct Node *head;

void Insert(int data, int n) {

  struct Node *temp1 = (struct Node *)malloc(sizeof(struct Node));
  temp1->data = data;
  temp1->next = NULL;
  if (n == 1) {         // insert at first position, make it as new head node.
    temp1->next = head; // head points to the current head node.
    head = temp1;       // point at new head
    return;
  }
  // struct Node *temp2 = (struct Node *)malloc(sizeof(struct Node));
  struct Node *temp2 = head;
  for (int i = 0; i < n - 2; i++) {
    temp2 = temp2->next;
  } // now after this temp2.next will point to nth location where new node is to
    // be inserted
  temp1->next = temp2->next;
  temp2->next = temp1;
}

void Print() {
  struct Node *temp = head;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

int main(int argc, char *argv[]) {

  head = NULL;
  Insert(2, 1); //  List: 2
  Insert(3, 2); // 2,3
  Insert(4, 1); // 4,2,3
  Insert(5, 2); // 4,5,2,3
  Print();
  return 0;
}
