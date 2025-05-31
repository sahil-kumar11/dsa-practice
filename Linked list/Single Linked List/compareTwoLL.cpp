#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

void insertAtEnd(Node* &head, int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

int compare_lists(Node* head1, Node* head2) {
    while(head1 != nullptr && head2 != nullptr) {
        if(head1->data != head2->data) {
            return 0;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    if(head1 == nullptr && head2 == nullptr) {
        return 1; 
    }
    else {
        return 0; 
    }
}

int main() {
    int t;  // Number of test cases
    cin >> t;
    while(t--) {
        int n1, n2, val;
        Node* head1 = nullptr;
        Node* head2 = nullptr;

        cin >> n1;
        for(int i = 0; i < n1; i++) {
            cin >> val;
            insertAtEnd(head1, val);
        }

        cin >> n2;
        for(int i = 0; i < n2; i++) {
            cin >> val;
            insertAtEnd(head2, val);
        }

        cout << compare_lists(head1, head2) << endl;
    }
    return 0;   
}
