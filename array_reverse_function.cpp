#include<iostream>
#include<vector>
using namespace std;
vector<int> reverseArray(vector<int> a) {
    int n=a.size();
    for(int i=0;i<n/2;i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    return a;
}   
    int main(){
        int n;
        cin >> n;
        vector<int> arr(n);
        int arr[n];
        for (int i=0;i<n;i++){
            cin >> arr[i];
        }
        arr = reverseArray(arr);
        for(int i=0;i<n;i++){
            cout << arr[i] << " ";
        }
}
