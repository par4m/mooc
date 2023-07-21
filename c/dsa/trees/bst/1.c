#include "stdbool.h"
#include "stdio.h"
#include <stdlib.h>

struct BstNode {

  int data;
  struct BstNode *left;
  struct BstNode *right;
};
// has to be global
// struct BstNode *root; // to store addr of root node

struct BstNode *GetNewNode(int data) {
  struct BstNode *NewNode = (struct BstNode *)malloc(sizeof(struct BstNode));
  NewNode->data = data;
  NewNode->left = NewNode->right = NULL;
  return NewNode;
}

struct BstNode *Insert(struct BstNode *root, int data) {
  if (root == NULL) { // Empty tree
    root = GetNewNode(data);
    return root;
  } else if (data <= root->data) {
    root->left = Insert(root->left, data);
  } else if (data > root->data) {
    root->right = Insert(root->right, data);
  }
  return root;
}

bool Search(struct BstNode *root, int data) {
  if (root == NULL) {
    return false;
  }
  if (root->data == data) {
    return true;
  } else if (data <= root->data) {
    return Search(root->left, data);
  } else if (data > root->data) {
    return Search(root->right, data);
  }
  return false;
}

int main() {

  struct BstNode *root;
  root = NULL; // Empty Tree
  /*Code to test the logic*/
  root = Insert(root, 15);
  root = Insert(root, 10);
  root = Insert(root, 20);
  root = Insert(root, 25);
  root = Insert(root, 8);
  root = Insert(root, 12);
  int number;
  scanf("%d", &number);
  if (Search(root, number) == true) {
    printf("Found\n");
  } else {
    printf("Not found\n");
  }

  return 0;
}
