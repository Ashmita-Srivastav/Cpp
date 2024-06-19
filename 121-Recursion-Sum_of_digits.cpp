#include<bits/stdc++.h>
using namespace std;
int digit_sum(int n){
    if(n==0){
        return 0;
    }
    int ans=(n%10)+digit_sum(n/10);
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<digit_sum(n);
}