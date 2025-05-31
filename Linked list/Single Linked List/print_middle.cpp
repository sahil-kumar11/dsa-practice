#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};
void insertAtFirst(Node* &head, int value){
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}
void printMiddle(Node* head){
    if(head == nullptr){
        cout << "List is empty" << endl;
        return;
    }
    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << "Print Middle Element: " << slow->data <<endl;
}
int main(){
    Node* head = nullptr;
    insertAtFirst(head, 1);
    insertAtFirst(head, 2);
    insertAtFirst(head, 3);
    insertAtFirst(head, 4);
    insertAtFirst(head, 5);
    printMiddle(head);
    return 0;
}
