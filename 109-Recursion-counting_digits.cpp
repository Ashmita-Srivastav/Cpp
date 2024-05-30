#include<iostream>
using namespace std;
int digits(int n){
    int const count=0;
    if(n>0){
        count++;
        digits(n/10);
    }    
    return count;
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<digits(n);
}