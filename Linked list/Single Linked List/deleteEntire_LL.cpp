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
    while(head!=nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}
void deleteAll(Node* head){
    Node* temp;
    while(head != nullptr){
        temp = head;
        head = head->next;
        delete temp;
    }
    cout << "All nodes are deleted";
}
int main(){
    Node* head = nullptr;
    insertAtFirst(head,1);
    insertAtFirst(head,2);
    insertAtFirst(head,3);
    insertAtFirst(head,4);
    insertAtFirst(head,5);
    insertAtFirst(head,6);
    print(head);
    deleteAll(head);
    print(head);
}
