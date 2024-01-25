#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int array[n];
    for (int i=0;i<n;i++){
        cout<<"Enter the element:";
        cin>>array[i];
    }
    sort(array,array+n);
    int largest=array[n-1];
    int second_largest;
    for(int i=n-2;i>=0;i--){
        if (array[n-2]!=largest){
            second_largest=array[i];
            break;
        } 
    }
    cout<<second_largest;
}