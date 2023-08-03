#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the number:";
    cin>>x;
    int n;
    cout<<"enter the power:";
    cin>>n;
    int count=0;
    int s=x;
   while(count<=n){
    
    s=s*x;
   count=count+1;
   }
   cout<<s/(x*x);
}
