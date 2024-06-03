#include<iostream>
using namespace std;
bool check_no(int a[],int n,int e ){
    if(n==0){
        return false;
    }
    if(a[0]== e){
        return true;
    }
    return check_no(a+1,n-1,e);
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
    if(check_no(a,n,e)==0){
        cout<<"False";
    }
    else{
        cout<<"True";
    }
    
}