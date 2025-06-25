#include <iostream>
using namespace std;

// Definition for a singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to insert a new node at the beginning of the list
ListNode* insertAtHead(ListNode* head, int val) {
    ListNode* newNode = new ListNode(val);
    newNode->next = head;
    return newNode; // New head of the list
}

// Function to print the linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << "->";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Creating linked list 0->1->2
    ListNode* head = new ListNode(0);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    
    cout << "Original List: ";
    printList(head);
    
    // Insert value 5 at the beginning
    head = insertAtHead(head, 5);
    
    cout << "Updated List: ";
    printList(head);
    
    return 0;
}
