#include<iostream>
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

void insertAtFirst(Node* &head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    if (head != nullptr) {
        head->prev = newNode;
    }
    head = newNode;
}

void deleteAtPosition(Node* &head, int position) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = head;

    if (position == 1) {
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        }
        delete temp;
        return;
    }

    int count = 1;
    while (temp != nullptr && count < position) {
        temp = temp->next;
        count++;
    }

    if (temp == nullptr) {
        cout << "Invalid position" << endl;
        return;
    }

    if (temp->prev != nullptr) {
        temp->prev->next = temp->next;
    }
    if (temp->next != nullptr) {
        temp->next->prev = temp->prev;
    }

    delete temp;
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    insertAtFirst(head, 30);
    insertAtFirst(head, 20);
    insertAtFirst(head, 10);

    print(head);

    deleteAtPosition(head, 2);

    print(head);

    return 0;
}
