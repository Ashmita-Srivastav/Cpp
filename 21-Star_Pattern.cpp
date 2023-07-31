#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of rows:";
    int n;
    cin>>n;
    int i=1;
    int c=1;
    while (i<=n){
        int j=1;
        int k=1;
        char v ='*';
        if(0<i<=50){
        while(k<=(n-i)){
            cout<<" ";
            k=k+1;
        }
        while (j<=i){
            cout<<v;
            j=j+1;
        } 
        int s=i-1;
        while(s>=1){
            cout<<v;
            s=s-1;
        }
            
        }    
                        
        cout<<endl;
        i=i+1;
    }
   
}

