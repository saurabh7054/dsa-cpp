#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

void deleteNode(ListNode* node) {
    // Copy the value of the next node to the current node
    node->val = node->next->val;
    // Point the current node to the next node's next
    ListNode* temp = node->next;
    node->next = node->next->next;
    // Free the memory of the next node
    delete temp;
}

// Helper function to print the linked list
void printList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->val << " -> ";
        current = current->next;
    }
    cout << "null" << endl;
}

int main() {
    // Create the linked list: 4 -> 5 -> 1 -> 9
    ListNode* head = new ListNode(4);
    head->next = new ListNode(5);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(9);

    cout << "Original list: ";
    printList(head);

    // Node to be deleted: node with value 5
    ListNode* nodeToDelete = head->next; // Points to the node with value 5
    deleteNode(nodeToDelete);

    cout << "List after deletion: ";
    printList(head);

    return 0;
}
