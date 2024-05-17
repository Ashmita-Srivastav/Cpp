#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[], int n){
    for(int i=0;i<n;i++){
     for(int i=1;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(arr[i]<arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<" element:";
        cin>>arr[i];
    }
    insertionsort(arr,n);
    cout<<"The sorted array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}