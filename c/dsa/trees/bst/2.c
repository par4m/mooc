#include "stdio.h"
#include "stdlib.h"

struct BstNode {
  int data;
  struct BstNode *left;
  struct BstNode *right;
};

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

int FindMin(struct BstNode *root) {
  if (root == NULL) {
    printf("Tree is Empty");
    return -1;
  }
  // struct BstNode *current = root;
  while (root->left != NULL) {
    root = root->left;
  }
  return root->data;
}

int FindMax(struct BstNode *root) {
  if (root == NULL) {
    printf("Tree is Empty");
    return -1;
  }
  // struct BstNode *current = root;
  while (root->right != NULL) {
    root = root->right;
  }
  return root->data;
}

int FindMinRec(struct BstNode *root) {
  if (root == NULL) {
    printf("BST Empty");
    return -1;
  } else if (root->left == NULL) {
    return root->data;
  }
  return FindMinRec(root->left);
}

int main() {
  // struct BstNode *head = NULL;
  struct BstNode *root;
  root = NULL; // Empty Tree
  /*Code to test the logic*/
  root = Insert(root, 15);
  root = Insert(root, 10);
  root = Insert(root, 20);
  root = Insert(root, 25);
  root = Insert(root, 8);
  root = Insert(root, 12);
  int min = FindMin(root);
  printf("Minimum Value is : %d\n", min);
  printf("Minimum Value is : %d\n", FindMinRec(root));
  int max = FindMax(root);
  printf("Max Value is : %d\n", max);

  return 0;
}
