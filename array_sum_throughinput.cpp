#include<iostream>
using namespace std;

int main() {
    int arr[5];
    int sum = 0;

    cout << "Enter 5 values: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];        // input
        sum += arr[i];        // sum karna
    }

    cout << "Sum is: " << sum;

    return 0;
}
