#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the number of rows:";
    int n;
    cin>>n;
     int i=1;
     int c=1;
    while(i<=n){
        int j=1;
       while(j<=i){
        cout<<c;
        j=j+1;
        c=c+1;
        }
        cout<<endl;
        i=i+1;
    }
}
