#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void insertAtEnd(Node* & head,int value){
    Node* newNode = new Node{value,nullptr};
    
    if(head == nullptr){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
}
void print(Node* head){
    while(head !=nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}
int main(){
    Node* head=nullptr;
    insertAtEnd(head,30);
    insertAtEnd(head,20);
    insertAtEnd(head,10);
    print(head);
    return 0;
}
Explanition:
// humna pehla ek strcut node banaya ha us main humna jesa ki har node ki baat hoti ha ki usa humna data
// deh ha through int and node main uska next ka address ya pointer deh geh. Ek function banaya geh jis main hume
// ek orginal linked main kaam karna ha joh bhi karna ha us liya hum usa refernce deh geh and value 
// batya geh then new node bana geh value but us main hum new node nhi banaya geh esa he shuru main
// pehla hum check kareh geh ki agr head joh ha woh null ha toh head ka null mtlb yahi ki linked list main
// kuch bhi na ho agr head joh equal to null ha then head main ya head pa he ek newnode bana keh return ho 
// jaha agr agr ek proper linked list bani hue ha then hum node banaya geh temp keh naam se and usko hum
// new node banaya geh and ek while ka loop chla gah ki head ka next jab tak null keh barabar nhi ha tab 
// tak chlta jaha and temp ka next agah bhrta jaha jab euqal to ho jaha tab ek wahn pa temp new node bana
// leh and then hum print karwaya geh and head koh next karta raha geh and then main function main hum head 
// koh null kareh geh mtlb kohi bhi value nhi ha abhi tak wahn pa and insert and print wala function koh 
// call kareh geh.

// Memorize shortly:
// insert at end ka function banao if ki condition lagao agr head null ha toh head koh new node bana keh return 
// kardo warna ek temp node bana keh usa head karo and while loop chalao ki temp ka next tab tak chla jab tak 
// temp null nhi hota and tem keh next main newnode bana keh print wala function laga doh then.