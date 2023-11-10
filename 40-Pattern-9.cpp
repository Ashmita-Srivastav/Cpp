#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n;
        while(j>=i){
            cout<<n-i+1; 
            j=j-1;
        }
        
        cout<<endl;
        i++;
    }
}
