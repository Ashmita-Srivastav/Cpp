#include <iostream>
using namespace std;
int main(){
    // formula to find the combination nCr-- n!/(r!(n-r)!)
    int n,r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    int fact_n=1;
    int i=1;
    while(i<=n){
        fact_n=fact_n*i;
        i++;
    }
    int fact_r=1;
    i=1;
    while(i<=r){
        fact_r=fact_r*i;
        i++;
    }
    int fact_n_r=1;
    i=1;
    while(i<=n-r){
        fact_n_r=fact_n_r*i;
        i++;
    }
    int s= fact_n/(fact_r * fact_n_r);
    cout<<s;
}
