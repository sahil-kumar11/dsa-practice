#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
};
void insertAtEnd(Node* &head, int data){
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    if(head==nullptr){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next !=nullptr){
        temp = temp->next;
    }
    temp->next = newNode;  // temp abhi last pa hoga and uska next null hoga toh huma wahn newNode rakh keh link karna ha temp keh next keh sath
    newNode->prev = temp;  // newNode keh prev main temp hoga toh us ka sath link karna ha
}
void print(Node* head){
    while(head!=nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}
int main(){
    Node* head = nullptr;
    insertAtEnd(head,3);
    insertAtEnd(head,2);
    insertAtEnd(head,1);
    print(head);
}