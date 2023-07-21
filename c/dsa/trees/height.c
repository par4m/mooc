#include "stdio.h"
#include "stdlib.h"

struct Node {
  int data;
  struct Node *left;
  struct Node *right;
};

int max(int a, int b) { return (a > b) ? a : b; }

int FindHeight(struct Node *root) {
  if (root == NULL) {
    return -1;
  }
  return max(FindHeight(root->left), FindHeight(root->right)) + 1;
}

int main(int argc, char *argv[]) { return 0; }
