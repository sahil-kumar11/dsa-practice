#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void insertAtFirst(Node* &head,int value){
    Node* newNode = new Node{value,head};
    head = newNode;
}
void print(Node* head){
    while(head!=nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}
int reverseTheLL(Node* &head){
    Node* curr = head;
    Node* prev = nullptr;
    Node* next = nullptr;
    while(curr != nullptr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}
int main(){
    Node* head = nullptr;
    insertAtFirst(head, 1);
    insertAtFirst(head, 2);
    insertAtFirst(head, 3);
    insertAtFirst(head, 4);
    print(head);
    reverseTheLL(head);
    print(reverseTheLL);
}
