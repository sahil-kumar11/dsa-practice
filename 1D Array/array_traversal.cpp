#include<iostream>
using namespace std;
int removeDuplicate(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
int main(){
    int arr1[]={1,2,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = removeDuplicate(arr1,n);
    for(int i=0;i<k;i++){
        cout <,arr[i];
    }
}