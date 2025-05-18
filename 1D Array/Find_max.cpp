#include<iostream>
using namespace std;
int LargestElement(int arr[],int n){
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int n = 5;
    int arr1[] = {1, 2, 3, 4, 5};
    int max = LargestElement(arr1,n);
    cout << "Largest element is " < max;
    return 0;
}