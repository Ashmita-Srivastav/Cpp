#include<iostream>
using namespace std;
int first_index(int a[],int n,int e ){
    static int i=0;
    if(n==0){
        return -1;
    }
    if(a[0]== e){
        return i;
    }
    i++;
    check_no(a+1,n-1,e);
    return i;
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
    cout<<first_index(a,n,e );
}
