#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

void DeleteNodes(Node*& head, int num) {
    Node** curr = &head;
    while (*curr) {
        if ((*curr)->value == num) {
            *curr = (*curr)->next;
        } else {
            curr = &(*curr)->next;
        }
    }
}

int main() {
    // Create a linked list
    Node* head = new Node{1, new Node{2, new Node{3, new Node{4, nullptr}}}};
    
    // Print the original linked list
    cout << "Original Linked List: ";
    for (Node* curr = head; curr != nullptr; curr = curr->next) {
        cout << curr->value << " ";
    }
    cout << endl;
    
    // Call DeleteNodes function to remove all nodes with value 2
    DeleteNodes(head, 2);
    
    // Print the updated linked list
    cout << "Updated Linked List: ";
    for (Node* curr = head; curr != nullptr; curr = curr->next) {
        cout << curr->value << " ";
    }
    cout << endl;
    
    return 0;
}
