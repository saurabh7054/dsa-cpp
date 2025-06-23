#include <iostream>
using namespace std;

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* searchBST(TreeNode* root, int val) {
  if (root == NULL) return NULL;
  if (root->val == val) return root;

  if (val < root->val)
    return searchBST(root->left, val);
  else
    return searchBST(root->right, val);
}
void printSearchResult(TreeNode* result) {
  if (result) {
    cout << "Node found: " << result->val << endl;
  } else {
    cout << "Node not found !" << endl;
  }
}
int main() {
  TreeNode* root = new TreeNode(20);
  root->left = new TreeNode(15);
  root->right = new TreeNode(30);
  root->left->left = new TreeNode(10);
  root->right->left = new TreeNode(25);  
  root->right->right = new TreeNode(35);

  int valueToSearch = 20;
  TreeNode* result = searchBST(root, valueToSearch);
  printSearchResult(result);
  return 0;
}
