#include<iostream>
using namespace std;
int n,m;
int main(){
    cin>>n>>m;
    if(n<m){
        cout << "lessser";
    }
    else if(n==m){
        cout << "equal";
    }
    else if(n>m){
        cout << "greater";
    }
    return 0;
}