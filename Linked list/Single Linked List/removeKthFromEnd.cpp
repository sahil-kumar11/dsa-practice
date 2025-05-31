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
Node* remvoeKthNode(Node* head,int k){
    Node* slow = head;
    Node* fast = head;
    for(int i=0; i<k;i++){
        fast = fast->next;
    }
    while(fast->next!=nullptr){
        slow = slow->next;
        fast = fast->next;
    }
    Node* delNode = slow->next;
    slow->next = slow->next->next;
    free(delNode);
    return head;
}
int main() {
    Node* head = nullptr;

    
    insertAtFirst(head, 5);
    insertAtFirst(head, 4);
    insertAtFirst(head, 3);
    insertAtFirst(head, 2);
    insertAtFirst(head, 1);

    cout << "Original Linked List: ";
    print(head);

    int k = 2; 
    head = remvoeKthNode(head, k);

    cout << "\nLinked List after removing " << k << "th node from the end: ";
    print(head);

    return 0;
}


