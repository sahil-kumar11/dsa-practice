#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Insert at any position
void insertAtPosition(Node* &head, int value, int position) {
    Node* newNode = new Node{value, nullptr};

    // Insertion at the beginning (position = 1)
    if (position == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    // Traverse to the (position - 1)th node
    Node* temp = head;
    int count = 1;
    while (temp != nullptr && count < position - 1) {
        temp = temp->next;
        count++;
    }

    // If position is invalid (beyond list length)
    if (temp == nullptr) {
        cout << "Invalid position!" << endl;
        delete newNode;
        return;
    }

    // Insert node
    newNode->next = temp->next;
    temp->next = newNode;
}

// Print linked list
void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    insertAtPosition(head, 10, 1); // 10
    insertAtPosition(head, 20, 2); // 10 20
    insertAtPosition(head, 30, 2); // 10 30 20
    insertAtPosition(head, 5, 1);  // 5 10 30 20

    print(head);

    return 0;
}
