#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    int choice;
    cin >> choice; 

    switch (choice) {
        case 1: {
            float R;
            cin >> R;
            cout << M_PI * R * R; 
            break;
        }
        case 2: {
            float L, B;
            cin >> L >> B;
            cout << L * B;  
            break;
        }
        default:
            cout << "Invalid choice";
    }
    return 0;
}
