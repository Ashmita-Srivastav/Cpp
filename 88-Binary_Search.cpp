#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int n ,int k ,int arr[]){
    int begin=0, end=n-1;
    while(begin<=end){
        int mid= (begin+end)/2;
        if(arr[mid]==k){
            return mid;
            break;
        }
        else if(k>arr[mid]){
            begin=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
    cout<<"the elements entered in the array must be sorted"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter the element:";
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the element to find: ";
    cin>>k;
    int ans= BinarySearch(n ,k ,arr);
    cout<<ans;
}