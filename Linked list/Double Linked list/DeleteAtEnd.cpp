#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
};
void insertAtFirst(Node* &head,int data){
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    newNode->prev = nullptr;

    if(head != nullptr){
        head->prev = newNode;
    }
    head = newNode;
}
void deleteAtEnd(Node* &head){
    if(head == nullptr){
        cout << "List is empty" << endl;
        return;
    }
    if(head->next == nullptr){
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->prev->next = nullptr;
    delete temp;
}
void print(Node* head){
    while(head!=nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}
int main(){
    Node* head = nullptr;
    insertAtFirst(head,10);
    insertAtFirst(head,20);
    insertAtFirst(head,30);
    print(head);
    deleteAtEnd(head);
    print(head);
}