#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int fact=1;
    int i=1;
    while(i<=n){
        fact=fact*i;
        i++;
    }
    cout<<fact;
}
