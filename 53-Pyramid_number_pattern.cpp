#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int k=1;
        int v=i;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        while(j<=i){
            cout<<v;
            j++;
            v--;
        }
        v=2;
        while(v>=1 && v<=i){
            
            cout<<v;
            v++;
        }
        cout<<endl;
        i++;
    }
}