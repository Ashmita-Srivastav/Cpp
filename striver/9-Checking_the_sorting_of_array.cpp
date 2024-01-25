#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool issorted(int array[],int n){
    for(int j=0;j<n;j++){
        for(int k=j+1;k<n;k++){
            if(array[j]<array[k]){
    
            }
            else{
                return false;
            }
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int count=0;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element: ";
        cin>>array[i];
    }
    bool ans=issorted(array,n);
    if(ans){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}