#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void insert(Node* &head,int value){
    Node* newNode = new Node{value,head};
    head = newNode;
}
void print(Node* head){
    while(head!=nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}
void merge(Node* &head,Node* firstHalf,Node* secondHalf){
    if(firstHalf == nullptr){
        head = secondHalf;
        return;
    }
    if(secondHalf == nullptr){
        head = firstHalf;
        return;
    }
    Node* temp = firstHalf;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = secondHalf;
    head = firstHalf;
}
int main(){
    Node* firstHalf = nullptr;
    Node* secondHalf = nullptr;
    Node* head = nullptr;
    insert(firstHalf,10);
    insert(firstHalf,20);
    insert(firstHalf,30);
    insert(firstHalf,40);
    insert(firstHalf,50);
    insert(secondHalf,60);
    insert(secondHalf,70);
    insert(secondHalf,80);
    insert(secondHalf,90);
    insert(secondHalf,100);
    cout << "First Half: ";
    print(firstHalf);
    cout << "\nSecond Half: ";
    print(secondHalf);
    cout << "After merge: ";
    print(head); 

}