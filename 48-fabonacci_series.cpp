#include <iostream>
using namespace std;
int main(){
    // fabonacci series: 0,1,1,2,3,5,8,13.....
    int n;
    cout<<"Enter the fabonacci term:";
    cin>>n;
    int i=0;
    int a=0;
    int b=1;
    int d=0;
    //from 3rd term
    for(; i<n-1;i++){
        d=a+b;
        a=b;
        b=d;
    }
    cout<<d;    
   
}
