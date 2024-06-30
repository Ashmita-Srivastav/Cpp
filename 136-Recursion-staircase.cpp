#include<iostream>
using namespace std;
int staircount(int n){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    int x=staircount(n-1);
    int y=staircount(n-2);
    int z=staircount(n-3);
    return x+y+z;
}
int main(){
    int n;
    cout<<"Enter the number of stairs:";
    cin>>n;
    int s=staircount(n);
    cout<<s; 
}