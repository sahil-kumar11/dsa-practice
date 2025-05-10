#include<iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Insert at beginning
void inserteAtFirst(Node* &head, int value) {
    Node* newNode = new Node{value, head};
    head = newNode;
}

// Delete at specific position
void deleteAtPosition(Node* &head, int position) {
    if (head == nullptr) {
        cout << "List is already empty" << endl;
        return;
    }

    if (position == 1) {  // If position is the first node
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    int count = 1;

    // Traverse to the (position - 1) node
    while (temp != nullptr && count < position - 1) {
        temp = temp->next;
        count++;
    }

    // If position is invalid (greater than size of list)
    if (temp == nullptr || temp->next == nullptr) {
        cout << "Invalid position" << endl;
        return;
    }

    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;  // Skip the node
    delete nodeToDelete;            // Delete the node
}

// Print the list
void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Main function
int main() {
    Node* head = nullptr;
    inserteAtFirst(head, 30);
    inserteAtFirst(head, 20);
    inserteAtFirst(head, 10);  // List: 10 -> 20 -> 30

    print(head);

    deleteAtPosition(head, 2); // Delete node at position 2 (which is 20)

    print(head);               // Result: 10 -> 30

    return 0;
}
