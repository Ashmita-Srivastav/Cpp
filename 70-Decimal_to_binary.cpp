#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int r=0,i=1;
    for(; n!=0;){
        r=(n%2)*i+r;
        i=i*10;
        n=n/2;
    }
    cout<<r;
}