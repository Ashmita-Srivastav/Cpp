#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }


int main()
{
    int n;
    cout<<"Ente the number of elements:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<< i+1 <<" element:";
        cin>>arr[i];
    }
    BubbleSort(arr,n);
    cout<<"The sorted array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}