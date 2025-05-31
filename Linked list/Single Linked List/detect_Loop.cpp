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
void insertAtFirst(Node* head,int value){
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}
void print(Node* head){
    while(head!=nullptr){
        cout << head->data << " ";
        head = head->next
    }
}
bool detectLoop(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast !=nullptr && fast->next !=nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return true;
        }
    }
    return false;
}
int main(){
    Node* head = nullptr;
    insertAtFirst(head,1);
    insertAtFirst(head,2);
    insertAtFirst(head,3);
    insertAtFirst(head,4);
    insertAtFirst(head,5);
    insertAtFirst(head,6);
    insertAtFirst(head,7);
    insertAtFirst(head,8);
    insertAtFirst(head,9);
    insertAtFirst(head,10);

    if(detectLoop(head)){
        cout << "loop is found";
    }
    else{
        cout << "Loop is not found";
    }
}