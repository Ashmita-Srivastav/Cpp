#include<iostream>
#include <vector>
using namespace std;
void solve(int temp[],int n){
    int array[n];
    for(int j=0;j<n;j++){
        array[j]=temp[j-1];
    }
    array[0]=temp[n-1];
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }    
}

int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int temp[n];
    for (int i = 0; i < n; i++)
    {
       cout<<"Enter the element:";
       cin>>temp[i];
    }
    solve(temp,n);
}