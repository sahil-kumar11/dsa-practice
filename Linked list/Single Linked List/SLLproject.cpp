#include<iostream>
using namespace std;
struct Student{
    string name;
    int roll;
    Student* next;

    Student(string data,int value){
        name=data;
        roll=value;
        next = nullptr;
    }
};
void insertAtFirst(Student* &head,string data,int value){
    Student* newStudent = new Student(data,value);
    newStudent->next = head;
    head = newStudent;
}
void insertAtEnd(Student* head,string data,int value){
    Student* newStudent = new Student(data,value);
    if(head == nullptr){
        head = newStudent;
        return;
    }
    Student* temp = head;
    while(temp->next!=nullptr){
        temp = temp->next;
    }
    temp->next = newStudent;
}
void displayAllStudents(Student* head){
    while(head!=nullptr){
        cout << head->name << " ";
        cout << head->roll << " ";
        head = head->next;
    }
}
void searchStudent(Student* head,int rollNumber){
    while(head!=nullptr){
        if(head->roll == rollNumber){
            cout << "Student found with roll number ";
            return;
        }
        head = head->next;
    }
}
int countStudent(Student* head){
    Student* temp = head;
    int count = 0;
    while(temp!=nullptr){
        count++;
        temp = temp->next;
    }
    return count;
}
void deleteStudentData(Student* &head,int rollNumber){
    if (head->roll == rollNumber) {
    Student* toDelete = head;
    head = head->next;
    delete toDelete;
    return;
}
Student* curr = head;
Student* prev = nullptr;
while (curr != nullptr && curr->roll != rollNumber) {
    prev = curr;
    curr = curr->next;
}
if (curr == nullptr) {
    cout << "Student not found!";
    return;
}
prev->next = curr->next;
delete curr;
}
void reverse(Student* &head){
    Student* curr = head;
    Student* prev = nullptr;
    Student* next = nullptr;
    while(curr != nullptr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}
int main() {
    Student* head = nullptr;

    insertAtEnd(head, "Ali", 1);
    insertAtEnd(head, "Sara", 2);
    insertAtFirst(head, "Bilal", 0);

    cout << "All students:\n";
    displayAllStudents(head);

    cout << "\nSearching for roll number 2:\n";
    searchStudent(head, 2);

    cout << "\nTotal students: " << countStudent(head) << endl;

    cout << "\nDeleting student with roll number 1:\n";
    deleteStudentData(head, 1);
    displayAllStudents(head);

    cout << "\nReversing the list:\n";
    reverse(head);
    displayAllStudents(head);

    return 0;
}
