
#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* left;
  Node* right;

  Node(int val) {
    data = val;
    left = right = NULL;
  }
};
void inorder(Node* root) {
  if (root == NULL) return;

  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}
int main() {
  // Manually creating a BST
  Node* root = new Node(50);
  root->left = new Node(30);
  root->right = new Node(70);
  root->left->left = new Node(20);
  root->left->right = new Node(40);
  root->right->left = new Node(60);
  root->right->right = new Node(80);

  cout << "Inorder traversal of BST: ";
  inorder(root);  
  cout << endl;

  return 0;
}
