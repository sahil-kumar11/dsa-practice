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
void splitintoHalves(Node* head,Node* &firstHalf,Node* &secondHalf){
    if(head == nullptr || head->next == nullptr){
        firstHalf = head;
        secondHalf = nullptr;
        return;
    }
    Node* slow = head;
    Node* fast = head->next;
    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    firstHalf = head;
    secondHalf = slow->next;
    slow->next = nullptr;
}
int main(){
    Node* head = nullptr;
    insertAtFirst(head,30);
    insertAtFirst(head,20);
    insertAtFirst(head,10);
    print(head);
    Node* firstHalf = nullptr;
    Node* secondHalf = nullptr;
    splitintoHalves(head,firstHalf,secondHalf);
    cout << "FirstHalf: ";
    print(firstHalf);
    cout << "secondHalf: ";
    print(secondHalf);
}