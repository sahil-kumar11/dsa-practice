#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    
    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

void insertAtFront(Node* &head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    if (head != nullptr) {
        head->prev = newNode;
    }
    head = newNode;
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

bool search(Node* head, int key) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == key) {
            return true;
        }
        current = current->next;
    }
    return false;
}

int main() {
    Node* head = nullptr;

    insertAtFront(head, 30);
    insertAtFront(head, 20);
    insertAtFront(head, 10);

    print(head);

    int key = 20;
    if (search(head, key)) {
        cout << "Found at: " << key << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}
