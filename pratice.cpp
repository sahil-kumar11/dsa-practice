#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void insertAtEnd(Node* &head,int value){
    Node* newNode = new Node{value,nullptr};
    if(head == nullptr){
        head = newNode;
        return;
    }
    Node* temp = head;
while(temp->next = nullptr){
    temp = temp->next;
}
temp->next = newNode;
}

