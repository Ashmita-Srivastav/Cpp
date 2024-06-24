#include<iostream>
using namespace std;
bool is_sorted(int a[], int size){
    if(size==0 || size==1){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }
    bool isSmallerSorted = is_sorted(a+1, size-1);
    return isSmallerSorted;
}
int main(){
    int a[50],n;
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(is_sorted(a,n)==1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
