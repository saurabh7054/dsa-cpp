#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

struct node {
  int data;
  node *left;
  node *right;
  node(int x){
    data = x;
    left = right = NULL;
  }
};
int solve(node *root, int &maxSum){
  if(!root) return 0;
  int left = max(0, solve(root->left, maxSum));
  int right = max(0, solve(root->right, maxSum));
  maxSum = max(maxSum, left + right + root->data);
  return root->data + max(left, right);
}
int maxPathSum(node *root){
  int maxSum = INT_MIN;
  solve(root, maxSum);
  return maxSum;
}
int main (){
  node *root = new node(-10);
  root->left = new node(9);
  root->right = new node(20);
  root->right->right = new node(15);
  root->right->left = new node(7);
  
  cout << "Maximum Path Sum: " << maxPathSum(root) << endl;
  return 0;

}