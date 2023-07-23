#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct BstNode {
  int value;
  struct BstNode *left;
  struct BstNode *right;
};

bool IsSubtreeLesser(struct BstNode *root, int value) {

  if (root == NULL) {
    return true;
  }
  if ((root->value <= value) && IsSubtreeLesser(root->left, value) &&
      IsSubtreeLesser(root->right, value)) {
    return true;
  } else
    return false;
}

// bool IsSubtreeGreater(struct BstNode *root, int value) {}

bool IsSubtreeGreater(struct BstNode *root, int value) {

  if (root == NULL) {
    return true;
  }
  if ((root->value > value) && IsSubtreeGreater(root->left, value) &&
      IsSubtreeGreater(root->right, value)) {
    return true;
  } else
    return false;
}

bool IsBinarySearchTree(struct BstNode *root, int minValue, int maxValue) {
  if (root == NULL) {
    return true;
  }
  // return true if BST, false if otherwise
  if (root->value > minValue && root->value < maxValue &&
      IsBinarySearchTree(root->left, minValue, root->value) &&
      IsBinarySearchTree(root->right, root->value, maxValue)) {

    return true;
  } // true if all elements are lesser in left subtree and right are greater and
    // both left and right are bst
  else
    return false;
}

int main(int argc, char *argv[]) { return 0; }
