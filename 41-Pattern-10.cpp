#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter th enumber of rows:";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        while(j<=i){
            cout<<j;
            j++;
        }
        j=i-1;
        while(j>=1){
            cout<<j;
            j=j-1;
        }
        cout<<endl;
        i++;
    }
}