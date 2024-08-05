#include<bits/stdc++.h>
using namespace std;
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

    
    //column sum
    int maxc=0;
    int s;
    while(j<c){
        int sumc=0;
        for(int i=0;i<r;i++){
            
            sumc=sumc+a[i][j];
            
        }
        if(maxc<sumc){
            maxc=sumc;
            s=j;
        }
        j++;
    }


     //row sum
    int maxr=0;
    int k;
    while(i<r){
        int sumr=0;
        for(int j=0;j<c;j++){
            
            sumr=sumr+a[i][j];
            
        }
        if(maxr<sumr){
            maxr=sumr;
            k=i;
        }
        i++;
    }


    if(maxc>maxr){
        cout<<"column"<<" "<<s<<" "<<maxc;
    }
    else{
        cout<<"row"<<" "<<k<<" "<<maxr;
    }
}
