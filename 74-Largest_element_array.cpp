#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int B[1000];
    for(int i=0;i<n;i++){
        cin>>B[i];
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<B[i]){
            max=B[i];
        }
    }
    cout<<max;
}
