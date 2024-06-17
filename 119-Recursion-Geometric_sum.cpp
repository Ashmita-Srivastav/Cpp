#include<bits/stdc++.h>
using namespace std;
float gs(int n){
    if(n==0){
        return 1;
    }
    float x=(1/pow(2,n));
    float so=gs(n-1);
    return so+x;

}
int main(){
    int n;
    cout<<"Enter the term:";
    cin>>n;
    cout<<gs(n);
}