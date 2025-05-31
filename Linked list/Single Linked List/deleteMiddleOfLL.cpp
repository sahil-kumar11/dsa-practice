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
void insertAtFirst(Node* &head,int value){
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}
void print(Node* head){
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}
Node* deleteMiddle(Node* head){
    if(head==nullptr || head->next == nullptr){
        return nullptr;
    }
    Node* slow = head;
    Node* fast = head;
    fast = fast->next->next;
    while(fast!=nullptr && fast->next !=nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->next = slow->next->next;
    return head;
}
int main(){
    Node* head = nullptr;
    insertAtFirst(head, 1);
    insertAtFirst(head, 2);
    insertAtFirst(head, 3);
    insertAtFirst(head,4);
    insertAtFirst(head,5);
    cout << "Orginal head: " << endl;
    print(head);
    head = deleteMiddle(head);
    cout << "After deleting middle: " << endl;
    print(head);
}