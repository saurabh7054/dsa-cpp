#include <iostream>
#include <vector>
#include <stack>
#include<algorithm>
using namespace std;

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
   if (root == NULL) return ans;
   stack<TreeNode*> s;
   s.push(root);
   while (!s.empty()) {
      TreeNode* temp = s.top();
      s.pop();
      ans.push_back(temp->data);

      if (temp->left) s.push(temp->left);
      if (temp->right) s.push(temp->right);
   }
   reverse(ans.begin(), ans.end());
   return ans;
}
int main() {
   TreeNode* root = new TreeNode(1);
   root->left = new TreeNode(2);
   root->right = new TreeNode(3);
   root->left->left = new TreeNode(4);
   root->left->left->right = new TreeNode(5);
   root->left->left->left = new TreeNode(8);
   root->right->left = new TreeNode(6);
   root->right->left->right = new TreeNode(7);

   vector<int> preorder = preorderTraversal(root);

   cout << "Preorder Traversal: ";
   for (int data : preorder) {
      cout << data << " ";
   }

   return 0;
}
