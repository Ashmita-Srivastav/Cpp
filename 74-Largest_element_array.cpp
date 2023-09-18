#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int B[1000];
    for(int i=0;i<n;i++){
        cin>>B[i];
    }
    int max=B[0];
    for(int i=1;i<n;i++){
        if(max<B[i]){
            max=B[i];
        }
    }
    cout<<max;
}