#include <iostream>
using namespace std;
bool isprime(int n){
    int i=2;
    while(i<n){
        if (n%i==0){
            return false;
        }
        i++;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    bool P=isprime(n);
    if(P==0){
        cout<<"Not Prime";
    }else{
        cout<<"Prime";
    }
}