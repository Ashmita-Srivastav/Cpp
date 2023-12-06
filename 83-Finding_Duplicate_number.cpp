#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    int ans=0;
    for(int i=0;i<n;i++){
        cout<<"Enter the element:";
        cin >> arr[i];

    }
    //XOR ing all array elements
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    //XOR [1, n-1]
    for(int i = 1;i<n;i++ ) {
         ans = ans^i;
    } 
    cout<< ans;
}
