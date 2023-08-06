#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int s=n;
        while(j<=n){
            cout<<s;  // or cout << n-j+1
            s=s-1;
            j=j+1;  
        }
        cout<<endl;
        i=i+1;       
    }
}