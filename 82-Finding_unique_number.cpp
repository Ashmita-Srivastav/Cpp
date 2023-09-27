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
    //for printing the elements
    /*for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }*/
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    cout<< ans;
}