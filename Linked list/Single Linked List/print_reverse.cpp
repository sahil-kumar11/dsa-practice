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

void reverse(Node* head){
    if(head == nullptr)
        return;
    reverse(head->next);
        cout << head->data << " ";
    }

int main(){
    Node* head = nullptr;
    insertAtFirst(head,10);
    insertAtFirst(head,20);
    insertAtFirst(head,30);
    reverse(head);
}