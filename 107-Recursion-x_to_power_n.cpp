#include <bits/stdc++.h>
using namespace std;
int power(int x,int n){
    if(n==0){
        return 1;
    }
    int s=power(x,n-1);
    int output=x*s;
    return output;
}
int main(){
    int x,n;
    cout<<"Enter the number:";
    cin>>x;
    cout<<"Enter the power:";
    cin>>n;
    cout<<power(x,n);
    }
