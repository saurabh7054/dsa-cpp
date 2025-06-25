#include <iostream>
using namespace std;

// Definition of a singly linked list node
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Helper function to insert a node at the end of the list
void insertNode(Node*& head, int value) {
    Node* newNode = new Node(value);
    
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to find the length of the linked list
int findLength(Node* head) {
    int count = 0;
    Node* current = head;
    while (current) {
        count++;
        current = current->next;
    }
    return count;
}
void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data;
        if (temp->next) cout << "->";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout << "Linked List: ";
    printList(head);

    int length = findLength(head);
    cout << "Length of linked list: " << length << endl;

    return 0;
}
