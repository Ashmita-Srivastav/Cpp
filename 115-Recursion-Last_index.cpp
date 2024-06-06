#include<iostream>
using namespace std;
int last_index(int a[],int n, int e){
    if(n==0){
        return -1;
    }
    if(a[n-1]==e){
        return n-1;
    }
    return last_index(a,n-1,e);
}
int main(){
    int a[50],n,e;
    cout<<"Enter number of elements:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the number:";
    cin>>e;
    cout<<last_index(a,n,e );
}