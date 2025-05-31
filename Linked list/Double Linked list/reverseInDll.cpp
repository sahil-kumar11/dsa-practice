#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
};
void insertAtFirst(Node* &head,int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    newNode->prev = nullptr;

    if(head!=nullptr){
        head->prev = newNode;
    }
    head = newNode;
}
void print(Node* head){
    while(head!=nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}
Node* reverseDll(Node* head){
    Node* temp = nullptr;
    Node* current = head;
    while(current !=nullptr){
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    if(temp != nullptr){
        head = temp->prev;
    }
    return head;
}
int main(){
    Node* head = nullptr;
    insertAtFirst(head, 10);
    insertAtFirst(head, 20);
    insertAtFirst(head, 30);
    print(head);
    head = reverseDll(head);
    print(head);
}