#include <iostream>
using namespace std;

struct BstNode {
  char data;
  BstNode *left;
  BstNode *right;
};

void PreOrder(struct BstNode *root) {
  if (root == NULL) {
    return;
  }
  // Visit the root
  cout << " " << root->data << " \n";

  // Visit left sub-tree
  PreOrder(root->left);

  // Visit right sub-tree
  PreOrder(root->right);
}

void InOrder(struct BstNode *root) {
  if (root == NULL) {
    return;
  }
  // Visit left sub-tree
  InOrder(root->left);

  // Visit the root
  cout << " " << root->data << " \n";

  // Visit right sub-tree
  InOrder(root->right);
}

void PostOrder(struct BstNode *root) {

  if (root == NULL) {
    return;
  }
  PostOrder(root->left);
  PostOrder(root->right);
  cout << " " << root->data << "\n";
}

int main() {
  struct BstNode *root = NULL;
  PreOrder(root);
  return 0;
}
