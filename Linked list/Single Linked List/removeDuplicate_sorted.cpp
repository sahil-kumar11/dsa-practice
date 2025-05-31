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
void insertAtFirst(Node* &head, int value){
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}
void print(Node* head){
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}
void removeDuplicate(Node* head){
    Node* current = head;
    while(current != nullptr && current->next != nullptr){
        if(current->data == current->next->data){
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
        else{
            current = current->next;
        }
    }

}
int main(){
    Node* head = nullptr;
    insertAtFirst(head, 1);
    insertAtFirst(head, 2);
    insertAtFirst(head, 3);
    insertAtFirst(head, 4);
    insertAtFirst(head, 4);
    insertAtFirst(head, 5);
    print(head);
    removeDuplicate(head);
    print(head);
    return 0;
}
