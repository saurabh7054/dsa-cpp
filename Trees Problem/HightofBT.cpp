#include<iostream>
using namespace std;

struct node{
  int data;
  node *left;
  node *right;
  
  node(int x){
    data = x;
    left = right = NULL;
  }
};

int maxDepth(node *root){
  if(root == NULL) return 0;
  int left = maxDepth(root->left);
  int right = maxDepth(root->right);
  
  return 1 + max(left, right);
}


int main (){
  node* root = new node(1);
  root->left = new node(2);
  root->right = new node(3);
  root->left->left = new node(4);
  root->left->right = new node(5);
  root->left->left->right = new node(10);
  
  cout << "Height of Binary Tree: " << maxDepth(root) << endl;
  return 0;
  
}