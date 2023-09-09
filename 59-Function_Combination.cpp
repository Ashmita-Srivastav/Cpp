#include <iostream>
using namespace std;
int factorial(int n){
    int ans=1;
    int i=1;
    while(i<=n){
        ans=ans*i;
        i++;
    }
    return ans;
}
int main(){
    int n,r;
    cin>>n>>r;

    int output_n= factorial(n);
    int output_r= factorial(r);
    int output_n_r= factorial(n-r);
    int C= (output_n)/(output_r*output_n_r);

    cout<<C;
}