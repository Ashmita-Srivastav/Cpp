#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[50][50];
    int r,c;
    cout<<"Enter the number of rows: ";
    cin>>r;
    cout<<"Enter the number of columns:";
    cin>>c;
    a[r][c];
    //taking input
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"Enter the elements:";
            cin>>a[i][j];
        }
    }
    //printing
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
            
        }
        cout<<endl;
    }
    for(int j=0;j<c;j++){
        int sum=0;
        for(int i=0;i<r;i++){
            
            sum=sum+a[i][j];
           
        }
        cout<<sum<<" ";
    }
    
}