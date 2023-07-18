#include <stdio.h>
#include <stdlib.h>

struct Node {

  int data;
  struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void EnQueue(int x) {
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
  temp->data = x;
  temp->next = NULL;
  if (front == NULL && rear == NULL) {
    front = temp;
    rear = temp;
    return;
  }
  rear->next = temp;
  rear = temp;
}

void DeQueue() {
  struct Node *temp = front;
  if (front == NULL) {
    printf("Queue Empty\n");
    return;
  }
  if (front == rear) {
    front = rear = NULL;
  } else {
    front = front->next;
  }
  printf("About to DeQueue: %d\n", front->data);
  free(temp);
}

void Print() {
  printf("Queue: ");
  struct Node *temp = front;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}
int main(int argc, char *argv[]) {
  EnQueue(5);
  Print();
  EnQueue(6);
  Print();
  EnQueue(7);
  Print();
  DeQueue();
  Print();

  return 0;
}
