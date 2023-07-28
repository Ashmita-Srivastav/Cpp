#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int i=1;
    int count = 0;
    while(i<=n){
        if(n%i==0){
            count=count+1;
        }    
        i=i+1;
    }
    if (count==2){
        cout<<"Prime";
    }else{
        cout<<"Not a prime";
    }
}
    
