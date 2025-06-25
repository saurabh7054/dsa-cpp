#include <iostream>
using namespace std;

// Node structure for doubly linked list
struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int val) { data = val; next = prev = nullptr; }
};

// Function to insert a node after position p
Node* insertAfterPosition(Node* head, int p, int x) {
    if (!head) return nullptr; // Empty list check
    
    Node* temp = head;
    for (int i = 0; i < p && temp; i++) {
        temp = temp->next;
    }
    
    if (!temp) return head; // If p is out of bounds
    
    Node* newNode = new Node(x);
    newNode->next = temp->next;
    newNode->prev = temp;
    
    if (temp->next) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    
    return head;
}

// Function to print the linked list
void printList(Node* head) {
    while (head) {
        cout << head->data;
        if (head->next) cout << "<->";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Creating the linked list: 2 <-> 4 <-> 5
    Node* head = new Node(2);
    head->next = new Node(4);
    head->next->prev = head;
    head->next->next = new Node(5);
    head->next->next->prev = head->next;
    
    int p = 2, x = 6;
    head = insertAfterPosition(head, p, x);
    printList(head); // Output: 2<->4<->5<->6
    
    return 0;
}
