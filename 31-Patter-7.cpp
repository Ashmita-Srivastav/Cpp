#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    int i =1;
    while (i<=n){
        int j=1;
        int s=i;
        while(j<=i){
            cout<<s;
            s=s-1;
            j++;
        }
        cout<<endl;
        i++;

    }

    
    
    }