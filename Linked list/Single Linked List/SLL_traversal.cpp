#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void insertValue(Node* &head,int data){
    Node* newNode = new Node{value,head};
    head = newNode;
}
void traversal(Node* head){
    while(head !=nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}
int main(){
    Node* head = nullptr;
    insertValue(head,30);
    insertValue(head,20);
    insertValue(head,10);
    traversal(head);
    return 0;
}

// Explanition:
// humna pehla ek strcut node banaya ha us main humna jesa ki har node ki baat hoti ha ki usa humna data
// deh ha through int and node main uska next ka address ya pointer deh geh. Ek function banaya geh jis main hume
// ek orginal linked main kaam karna ha joh bhi karna ha us liya hum usa refernce deh geh and value 
// batya geh then new node bana geh value and head rakh keh newnode koh hum head main daal deh geh ab hum 
// atta ha print keh function pa us main node koh head ka address deh geh and ek while loop chlya geh
// and bola geh ki head koh tab bhi print karo jab tak nullptr nhi ah jata and head ki data hum print
// karwaya geh and head koh next karta raha geh and then main function main hum head koh null kareh geh
// mtlb kohi bhi value nhi ha abhi tak wahn pa and insert and print wala function koh call kareh geh.