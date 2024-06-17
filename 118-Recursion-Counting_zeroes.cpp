#include<iostream>
using namespace std;
int count_zero(int n){
    static int count=0;
    if(n>0){
        if(n%10==0){
            count++;
        }
        count_zero(n/10);
        return count;
    } 
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<count_zero(n);
}