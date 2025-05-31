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
Node* loopStartPoint(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast!=nullptr && fast->next!=nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            slow = head;
            while(slow!=fast){
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return nullptr;
}
int main(){
    Node* head = nullptr;
    insertAtFirst(head, 1);
    insertAtFirst(head, 2);
    insertAtFirst(head, 3);
    insertAtFirst(head, 4);
    insertAtFirst(head, 5);
    insertAtFirst(head, 6);
    insertAtFirst(head, 7);
    insertAtFirst(head, 8);
    insertAtFirst(head, 9);
    insertAtFirst(head, 10);
    print(head);
    Node* loopNode = loopStartPoint(head);
    if(loopNode){
        cout << "Loop detected and its starting value is: " << loopNode->data << endl;
    }
    else{
        cout << "Loop does not detected";
    }
}