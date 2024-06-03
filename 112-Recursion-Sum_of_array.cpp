#include<iostream>
using namespace std;
int array_sum(int a[],int n){
    int sum=0;
    if(n==0 || n==1){
        return *a;
    }
    sum=sum+(*a);
    int so=sum+array_sum(a+1,n-1);
    return so; 
}
int main(){
    int a[50],n;
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<array_sum(a,n);
    
}