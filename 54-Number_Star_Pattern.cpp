#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int i=1;
    int l=n;
    while(i<=n){
        int j=n;
        while(j>=i){
            cout<<n-j+1;
            j--;
        }
        if (i>1){
            int v=1;
            while(v<=2*(i-1)){
                cout<<'*';
                v++;
            }
        }
        j=l;
        while(j>=1){
            cout<<j;
            j--;
        }
        i++;
        l=l-1;
        cout<<endl;
    }
}