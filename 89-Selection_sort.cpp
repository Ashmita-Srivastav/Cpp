#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int  min=arr[i], minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                minIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=min;
        arr[minIndex]=temp;
    }
    

}
int main()
{
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element:";
        cin >> arr[i];
    }
    SelectionSort(arr,n);
    cout<<"The sorted array is:";
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;
}