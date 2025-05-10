#include<iostream>
using namespace std;
int main() {
    int grade;
    cin >> grade;
    if(grade >= 80 && grade <= 100) {
        cout << "A" << endl;
    }
    else if(grade >=60 && grade <=79){
        cout << "B" << endl;
    }
    else if(grade >=50 && grade <=59){
        cout << "C" << endl;
    }
    else if(grade >=45 && grade <=49){
        cout << "D" << endl;
    }
    else if(grade >=25 && grade <=44){
        cout << "E" << endl;
    }
    else{
        cout << "F" << endl;
    }
    return 0;
}