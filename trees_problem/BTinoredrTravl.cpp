
#include <iostream>
using namespace std;

// Define the structure for a node
struct TreeNode {
   int val;
   TreeNode* left;
   TreeNode* right;

   TreeNode(int value) {
      val = value;
      left = right = NULL;
   }
};

// Inorder traversal: Left -> Root -> Right
void inorder(TreeNode* root) {
   if (root == NULL) return;

   inorder(root->left);
   cout << root->val << " ";
   inorder(root->right);
}

int main() {
  
   TreeNode* root = new TreeNode(1);
   root->left = new TreeNode(2);
   root->right = new TreeNode(3);
   root->left->left = new TreeNode(4);
   root->left->right = new TreeNode(5);

   cout << "Inorder Traversal: ";
   inorder(root);
   cout << endl;

   return 0;
}
