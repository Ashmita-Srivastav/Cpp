#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[], int arr2[],int n,int m,int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<n){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    } 
    while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
    }      
}
   
int main()
{
    int n;
    cout<<"Enter the number of elements of the first array:";
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<< i+1 <<" element:";
        cin>>arr1[i];
    }
    int m;
    cout<<"Enter the number of elements of the second array:";
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cout<<"Enter the "<< i+1 <<" element:";
        cin>>arr2[i];
    }
    int arr3[n+m];
    merge(arr1,arr2,n,m,arr3);
    cout<<"The merged sorted array is:";
    for(int i=0;i<n+m;i++){
        cout<<arr3[i]<<" ";
    }

    
}