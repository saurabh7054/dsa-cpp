#include <iostream>
using namespace std;

// Node structure
struct Node {
   int data;
   Node* left;
   Node* right;

   // Constructor
   Node(int value) {
      data = value;
      left = right = NULL;
   }
};

// Inorder Traversal (Left -> Root -> Right)
void inorderTraversal(Node* root) {
   if(root == NULL) return;
   inorderTraversal(root->left);
   cout << root->data << " ";
   inorderTraversal(root->right);
}

// Driver code
int main() {
   // Creating nodes manually
   Node* root = new Node(1);
   root->left = new Node(2);
   root->right = new Node(3);
   root->left->left = new Node(4);
   root->left->right = new Node(5);

   cout << "Inorder Traversal: ";
   inorderTraversal(root);

   return 0;
}
