#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  // struct Node *addr;
  struct Node *link;
};

struct Node *head; // global variable, can be accessed anywhere

void Insert(int x) {

  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
  // (*temp).data = x;
  temp->data = x;
  // temp->link = NULL; // when list is empty
  // if (head != NULL) {
  // temp->link = head;
  // } // when list is empty head is already null
  temp->link = head;
  head = temp;
};

void Print() {
  struct Node *temp =
      head; // temp has address of head node so we dont modify the head
  // Now to traverse the LL
  printf("List is\n");
  while (temp != NULL) {
    printf("%d\t", temp->data);
    printf("%d\n", temp->link);
    temp = temp->link;
  }
  printf("End of List\n");
};

int main(int argc, char *argv[]) {

  head = NULL; // list is empty
  printf("How Many Numbers: ");
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n;
       i++) { // ask the no. and insert each no. into linkedlist
    printf("Enter the number: \n");
    int x;
    scanf("%d", &x);
    Insert(x); // insert x into ll
    Print();   // print everything in ll after inserting into ll.
  }

  return 0;
}
