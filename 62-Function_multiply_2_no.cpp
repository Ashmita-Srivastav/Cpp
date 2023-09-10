#include <iostream>
using namespace std;
int multiply(int a,int b){
    return a*b;
}
int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;

    cout<<"Enter b: ";
    cin>>b;

    int s=multiply(a,b);
    cout<<s<<endl;
}