#include <iostream>
#include <algorithm> // for max()
#include <cmath>     // for abs()
using namespace std;

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x){
    val = x;
    left = right = NULL;
  } 
};
class Solution {
public:
  bool isBalanced(TreeNode* root) {
    return check(root) != -1; // check if balanced
  }

  int check(TreeNode* root) {
    if (root == NULL) return 0; 
    int left = check(root->left);  // recursively get height of left subtree
    if (left == -1) return -1;     // if left subtree is unbalanced, return -1

    int right = check(root->right); // recursively get height of right subtree
    if (right == -1) return -1;     // if right subtree is unbalanced, return -1

    if (abs(left - right) > 1) return -1; // if the difference in heights is > 1, return -1 (unbalanced)
    return 1 + max(left, right); // return height of the current node
  }
};
int main() {
  Solution sol;

  TreeNode* root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->right = new TreeNode(2);
  root->left->left = new TreeNode(3);
  root->left->right = new TreeNode(3);
  root->left->left->left = new TreeNode(4);
  root->left->left->right = new TreeNode(4);

  bool result = sol.isBalanced(root);
  cout << (result ? "True" : "False") << endl;

  return 0;
}
