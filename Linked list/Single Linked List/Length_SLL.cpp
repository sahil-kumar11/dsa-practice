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
int length(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != nullptr){
        temp = temp->next;
        count++;
    }
    return count;
}
int main(){
    Node* head = nullptr;
    insertAtFirst(head,30);
    insertAtFirst(head,20);
    insertAtFirst(head,10);
    print(head);
    cout << "The length is: ";
    cout << length(head);
}