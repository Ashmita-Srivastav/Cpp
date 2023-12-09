#include <iostream>
using namespace std;
int main(){
    int N;
    cout << "Enter the number: ";
    cin>>N;
    int C;
    cout << "SUm(1) or Product(2): ";
    cin >> C;
    if (C == 1){
        int i=0;
        int j=i;
        while(i<=N){
            j=i+j; 
            i++;    
        }
       cout << j;   
    }
    else if(C == 2){
        int i=1;
        int j=i;
        while(j<=N){
            i=i*j;
            j++;
            
        }
        cout<<i;
    }else{
        cout << "-1";
    }
}
