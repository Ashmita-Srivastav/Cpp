#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int input[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int a=input[0];
    for(int i=1;i<n;i++){
        a=a+input[i];
    }
    cout<<a;
}