#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
};
void insertAtPosition(Node* &head, int data, int position){
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    if(position == 1){
        newNode->next = head;
        if(head != nullptr){
            head->prev = newNode;
        }
        head = newNode;
        return;
    }

    Node* temp = head;
    int count = 1;
    while(temp != nullptr && count < position - 1){
        temp = temp->next;
        count++;
    }
    if(temp==nullptr){
        cout << "Position is out of range" << endl;
        delete newNode;
        return;
    }
    newNode->next = temp->next;
    newNode->prev = temp;

    if(temp->next!=nullptr){
        temp->next->prev = newNode;
    }
    temp->next = newNode;
}
void print(Node* head){
    while(head!=nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}
int main(){
    Node* head = nullptr;
    insertAtPosition(head,3,1);
    insertAtPosition(head,2,2);
    insertAtPosition(head,1,3);
    print(head);
    insertAtPosition(head,4,2);
    print(head);
}