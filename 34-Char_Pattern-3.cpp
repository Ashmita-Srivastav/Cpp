#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int i=1;
    char s='A';
    while(i<=n){
        int j=1;
        
        while(j<=i){
            cout<<s;
            j++;
            
        }
        s++;
        cout<<endl;
        i++;
    }
}
 