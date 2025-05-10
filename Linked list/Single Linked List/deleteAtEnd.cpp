#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void inserAtFirst(Node* &head,int value){
    Node* newNode = new Node{value,head};
    head = newNode;
}
void DeleteEnd(Node* head){
    if(head == nullptr){
        cout << "List is already empty";
        return;
    }
    if(head->next == nullptr){
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while(temp->next->next !=nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}
    void print(Node* head){
        while(head !=nullptr){
            cout << head->data << " ";
            head = head->next;
    }
}
int main(){
    Node* head = nullptr;
    inserAtFirst(head,30);
    inserAtFirst(head,20);
    inserAtFirst(head,10);
    print(head);
    DeleteEnd(head);
    print(head);
    return 0;
}

Explanition:
// humna pehla ek strcut node banaya ha us main humna jesa ki har node ki baat hoti ha ki usa humna data
// deh ha through int and node main uska next ka address ya pointer deh geh. Ek function banaya geh jis main hume
// ek orginal linked main kaam karna ha joh bhi karna ha us liya hum usa refernce deh geh and value 
// batya geh then new node bana geh value and head rakh keh newnode koh hum head main daal deh geh 
// head = newnode hum esi liya banata ha kyu ki hum head ki new node main ya head pa kuch changing 
// karna chata ha usi liya lagya geh baki delete at end and position main pa head pa kuch frak nhi ayya
// gah toh usi liya hum yeh wali line nhi likha geh and usi keh baat hum if wali conditon laga keh 
// check kareh geh ki agr head joh ha woh null keh barabar ha toh hum print kareh geh kohi bhi list 
// yahn pa nhi ha and return kardeh geh and ek or hum if ki condition agya geh ki agr head ka next agr 
// null keh barabar ha toh hum head koh delete karka head koh null bana keh return kardeh geh warna phir hum ek 
// temp node banaya geh and ek while ka loop chlya geh tab tak tab tak temp keh next ka next null nhi hota 
// tab tak chlta chla and jab mil jaha tab temp keh next koh delete karka temp keh next koh null bana doh and then 
// then print keh function pa us main node koh head ka address deh geh and ek while loop chlya geh and bola geh ki 
// head koh tab bhi print karo jab tak nullptr nhi ah jata and head ki data hum print karwaya geh and head koh 
// next karta raha geh and then main function main hum head koh null kareh geh mtlb kohi bhi value nhi ha abhi tak 
// wahn pa and insert and print wala function koh call kareh geh.   
