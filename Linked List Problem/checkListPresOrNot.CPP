#include <iostream>
using namespace std;

// Node structure
struct Node {
   int data;
   Node* next;
   Node(int val) : data(val), next(nullptr) {}
};

// Function to search for a key in the linked list
bool searchKey(Node* head, int key) {
   Node* current = head;
   while (current != nullptr) {
      if (current->data == key) {
         return true;
      }
      current = current->next;
   }
   return false;
}

// Function to insert a new node at the end of the linked list
void insert(Node*& head, int val) {
   if (!head) {
      head = new Node(val);
      return;
   }
   Node* temp = head;
   while (temp->next) {
      temp = temp->next;
   }
   temp->next = new Node(val);
}

// Driver code
int main() {
   Node* head = nullptr;
   insert(head, 1);
   insert(head, 2);
   insert(head, 3);
   insert(head, 4);
    
   int key = 7;
   if (searchKey(head, key)) {
      cout << "true" << endl;
   } else {
      cout << "false" << endl;
   } 
   return 0;
}
