#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
   int data;
   TreeNode* left;
   TreeNode* right; 

   TreeNode(int x) {
      data = x;
      left = right = NULL;
   }
};

vector<int> preorderTraversal(TreeNode* root) {
   vector<int> ans;
   if (root == NULL) return ans;i

   stack<TreeNode*> s;
   s.push(root);
    
   while (!s.empty()) {
      TreeNode* temp = s.top();
      s.pop();
      ans.push_back(temp->data);
        
      if (temp->right)
         s.push(temp->right);
      if (temp->left)
         s.push(temp->left);
   }

   return ans;
}

// 🔽 Main function to test the traversal
int main() {
   TreeNode* root = new TreeNode(1);
   root->right = new TreeNode(2);
   root->right->left = new TreeNode(3);

   vector<int> preorder = preorderTraversal(root);

   cout << "Preorder Traversal: ";
   for (int data : preorder) {
      cout << data << " ";
   }

   return 0;
}
