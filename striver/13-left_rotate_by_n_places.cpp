#include<bits/stdc++.h>
using namespace std;
vector<int>rA(int arr[],int k, int n) {
    int temp=arr[0];
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}
int main(){
     int n = 7;
    int arr[] = {1,2,3,4,5,6,7};
   
    int k=2;
    rA(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}