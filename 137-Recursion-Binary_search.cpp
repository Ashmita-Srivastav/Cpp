#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int begin, int end, int k ,int arr[]){
    if(begin<=end){
        int mid= (end+begin)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(k>arr[mid]){
            return BinarySearch(mid+1,  end,  k , arr);
        }
        return BinarySearch(begin, mid-1, k ,arr);
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
    int ans= BinarySearch(0,n-1,k ,arr);
    cout<<ans;
}