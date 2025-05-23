#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void inser(Node *&head, int value)
{
    Node *newNode = new Node{value, head};
    head = newNode;
}
void print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
bool search(Node *head, int key)
{
    Node *current = head;
    while (current != nullptr)
    {
        if (current->data == key)
        {                               // see only current->data and return true
            return true;
        }
        current = current->next;
    }
    return false;
}
int main()
{
    Node *head = nullptr;
    inser(head, 30);
    inser(head, 20);
    inser(head, 10);
    print(head);
    int key = 20;
    if (search(head, key))
    {
        cout << "Found at: " << key;
    }
    else
    {
        cout << "Not found";
    }
    return 0;
}
