#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
    for(int i=1;i>n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n = 5;
    if(issorted(arr,n)){
        cout << "Array is sorted";
    }
    else{
        cout << "Array is not sorted";
    }
    return 0;
}