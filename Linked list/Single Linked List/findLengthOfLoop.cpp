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
int findLength(Node* slow,Node* fast){
    int count = 1;
    fast = fast->next;
    while(slow!=fast){
        count++;
        fast = fast->next;
    }
    return count;
}
int detectLoop(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast!= nullptr && fast->next !=nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            return findLength(slow,fast);
        }
    }
    return 0;
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
    head->next->next->next->next->next->next->next->next->next->next = head->next;
    int loop = detectLoop(head);
    if(loop > 0){
        cout << "The length of loop is: " << loop;
    }
    else{
        cout << "The is not detected";
    }
}