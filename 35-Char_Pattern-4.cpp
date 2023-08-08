#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char c='A'+i-1+j-1;
        while(j<=i){
            cout<<c;
            j++;
            c++;
        }
        cout<<endl;
        i++;
    }
}