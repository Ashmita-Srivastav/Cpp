#include<bits/stdc++.h>
using namespace std;
void wave(int a[][50],int r,int c){
    int i=0,j=0;
    while(j<c){
        while(i<r){
            cout<<a[i][j]<<" ";
            i++;
        }
        i=r-1;
        j++;
        while(i>=0){
            cout<<a[i][j]<<" ";
            i--;
        }
        j++;
        i++;
    }
}
int main(){
    int a[50][50];
    int r,c, i=0,j=0;
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
    wave(a,r,c);

}