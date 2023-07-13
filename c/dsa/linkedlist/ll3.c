#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *head; // global

void Insert(int n) { // insert an integer at the end of the list
  struct Node *temp1 = head;
  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
  new_node->data = n;
  new_node->next = NULL;
  if (head == NULL) {
    head = new_node;
    return;
  }
  while (temp1->next != NULL) {
    temp1 = temp1->next;
  }
  temp1->next = new_node;
}

void Print() { // print all elements of the list

  struct Node *temp1 = head;
  while (temp1 != NULL) {
    printf("%d ", temp1->data);
    temp1 = temp1->next;
  }
}

void Delete(int n) { // delete node at the nth position of the linkedlist
  struct Node *temp1 = head;
  if (n == 1) {
    head = temp1->next; // head now points to the second node
    free(temp1);
    return;
  }
  for (int i = 1; i < n - 1; i++) {
    temp1 = temp1->next;
  }
  struct Node *temp2 = temp1->next; // temp2 = nth node
  temp1->next = temp2->next;
  free(temp2);
}

int main(int argc, char *argv[]) {
  head = NULL; // empty list
  Insert(2);
  Insert(4);
  Insert(6);
  Insert(5); // 2,4,6,5
  int n;
  printf("Delete at position: \n");
  scanf("%d", &n);
  Delete(n);
  Print();

  return 0;
}
