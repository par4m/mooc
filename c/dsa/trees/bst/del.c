#include <stdio.h>

struct Node {

  int data;
  struct Node *left;
  struct Node *right;
};

struct Node *Delete(struct Node *root, int data) {

  if (root == NULL) {
    return root;
  } else if (data < root->data) {
    root->left = Delete(root->left, data);
  } else if (data > root->data) {
    root->right = Delete(root->right, data);
  } else {
    // Case 1: No Child
    if (root->left == NULL && root->right == NULL) {
      free(root);
      root == NULL;
    }
    // Case 2: One Child
    else if (root->left == NULL) {
      struct Node *temp = root;
      root = root->right;
      free(temp);
    } else if (root->right == NULL) {
      struct Node *temp = root;
      root = root->left;
      free(temp);
    }
    // Case 3: 2 Children
    else { // Find Min in Right Subtree
      struct Node *temp = FindMin(root->right);
      root->data = temp->data;
      root->right = Delete(root->right, temp->data);
    }
  }
  return root;
}

int main() { return 0; }
