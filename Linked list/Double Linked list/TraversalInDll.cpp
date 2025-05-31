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
int main(){
    Node* head = nullptr;
    insertAtFirst(head, 10);
    insertAtFirst(head, 20);
    insertAtFirst(head, 30);
    insertAtFirst(head, 40);
    print(head);
}