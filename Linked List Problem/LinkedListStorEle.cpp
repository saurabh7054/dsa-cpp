#include<iostream>
using namespace std;

class Node {
  public:
  int data;
  Node *next;
};

Node* head = NULL;

void insert(int n) {
   Node* newNode = new Node;
   newNode->data = n;
   newNode->next = head;
   head = newNode;
}

void displayInfo() {
  cout << "Data elements in the linked list: ";
  Node* temp = head;
  while (temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout <<"NULL" << endl;
}

int main() {
  insert(5);
  insert(4);
  insert(3);
  insert(2);
  insert(1);
  
  displayInfo();
  return 0;
}
