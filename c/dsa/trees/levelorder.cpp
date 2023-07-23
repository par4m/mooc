#include <iostream>
#include <queue>

using namespace std;

struct BstNode {

  char data;
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

void LevelOrder(struct BstNode *root) {
  if (root == NULL) {
    return;
  }
  queue<BstNode *> Q;
  Q.push(root);
  // while there is at least one discovered node
  while (!Q.empty()) { // queue should not be empty
    BstNode *current = Q.front();
    cout << current->data << " ";
    if (current->left != NULL) {
      Q.push(current->left);
    }
    if (current->right != NULL) {
      Q.push(current->right);
    }
    Q.pop(); // remove from front of the queue
  }
}

int main() {
  /*Code To Test the logic
    Creating an example tree
                      M
                     / \
                    B   Q
                   / \   \
                  A   C   Z
*/
  BstNode *root = NULL;
  root = Insert(root, 'M');
  root = Insert(root, 'B');
  root = Insert(root, 'Q');
  root = Insert(root, 'Z');
  root = Insert(root, 'A');
  root = Insert(root, 'C');
  // Print Nodes in Level Order.
  LevelOrder(root);
}
