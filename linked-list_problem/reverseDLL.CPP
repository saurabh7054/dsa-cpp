#include<iostream>
using namespace std;

struct Node{
  int data;
  Node *next;
  Node *prev;
  Node(int val){data = val; next = prev = nullptr; }
};

Node* reverseDLL(Node* head){
  Node* temp = nullptr;
  Node* current = head;
  while (current != nullptr) {
    temp = current->prev;
    current->prev = current->next;
    current->next = temp;
    current = current->prev;
  }
  if (temp != nullptr) {
    head = temp->prev;
  }
  return head;
} 

void printList(Node *head){
  while(head){
    cout << head->data;
    if(head->next) cout << "<->";
    head = head->next;
  }
  cout << endl;
}

int main (){
  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->prev = head;
  head->next->next = new Node(3);
  head->next->next->prev = head->next;
  head->next->next->next = new Node(4);
  head->next->next->next->prev = head->next->next;
  head->next->next->next->next = new Node(5);
  head->next->next->next->next->prev = head->next->next->next;
  
  cout <<"Original DLL: ";
  printList(head);
  
  head = reverseDLL(head);
  cout <<"Reverse DLL: ";
  printList(head);
  return 0;
}
