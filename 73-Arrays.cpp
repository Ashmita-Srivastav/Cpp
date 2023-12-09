#include <iostream>
using namespace std;
int main(){
    int b[10];
    b[2]=15;
    b[0]=18;
    b[9]=4;
    cout<<b[2]<<" "<<b[0]<<" "<<b[9]<<endl;;
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the element:";
        cin >> b[i];

    }
    for(int i=0;i<n;i++){
        cout << b[i]<<" ";
    }
}
