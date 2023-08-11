#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    int i=1;
    while (i<=n){
        int j=1;
        int k=1;
        int s=i;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        while (j<=i){
            cout<<s;
            j++;
            s++;
        }
        j=2*i-2;
        while(j>=i){
            cout<<j;
            j=j-1;

        }
        cout<<endl;
        i++;
        
    }
}