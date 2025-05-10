#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void inserteAtFirst(Node* &head,int value){
    Node* newNode = new Node{value,head};
    head = newNode;
}
void deleteAtFirst(Node* &head){
if(head == nullptr){
    cout << "List is already empty";
    return;
}
    Node* temp = head;
    head = head->next;
    delete temp;
}
void print(Node* head){
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}
int main(){
    Node* head = nullptr;
    inserteAtFirst(head,30);
    inserteAtFirst(head,20);
    inserteAtFirst(head,10);
    print(head);
    deleteAtFirst(head);
    print(head);
    return 0;
}

// Explanition:
// humna pehla ek strcut node banaya ha us main humna jesa ki har node ki baat hoti ha ki usa humna data
// deh ha through int and node main uska next ka address ya pointer deh geh. Ek function banaya geh jis main hume
// ek orginal linked main kaam karna ha joh bhi karna ha us liya hum usa refernce deh geh and value 
// batya geh then new node bana geh value and head rakh keh newnode koh hum head main daal deh geh 
// head = newnode hum esi liya banata ha kyu ki hum head ki new node main ya head pa kuch changing 
// karna chata ha usi liya lagya geh baki delete at end and position main pa head pa kuch frak nhi ayya
// gah toh usi liya hum yeh wali line nhi likha geh and usi keh baat hum if wali conditon laga keh 
// check kareh geh ki agr head joh ha woh null keh barabar ha toh hum print kareh geh kohi bhi list 
// yahn pa nhi ha and return kardeh geh but agr ha toh hum ek temp node banaya geh head pa and head koh 
// hum head ka next bana deh geh and temp koh delete kardeh geh and the print keh function pa us main 
// node koh head ka address deh geh and ek while loop chlya geh and bola geh ki head koh tab bhi print 
// karo jab tak nullptr nhi ah jata and head ki data hum print karwaya geh and head koh next karta raha 
// geh and then main function main hum head koh null kareh geh mtlb kohi bhi value nhi ha abhi tak wahn 
// pa and insert and print wala function koh call kareh geh.   
