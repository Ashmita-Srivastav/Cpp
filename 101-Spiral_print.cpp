#include<bits/stdc++.h>
using namespace std;
void spiral(int a[][50],int r,int c){
    int i=0,j=0,k=0;
    while(k<r && k<c){
        while(j<c-k){
            cout<<a[i][j]<<" ";
            j++;
        }
        i++;
        j--;
        while(i<r-k){
            cout<<a[i][j]<<" ";
            i++;
        }
        i--;
        j--;
        while(j>=0+k){
            cout<<a[i][j]<<" ";
            j--;
        }
        j++;
        i--;
        while(i>0+k){
            cout<<a[i][j]<<" ";
            i--;
        }
        i++;
        k++;
        j++;
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
    spiral(a,r,c);

}
