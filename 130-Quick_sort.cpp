#include <bits/stdc++.h>
using namespace std;

int partition(int * arr,int si,int ei){
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<=arr[si]){
            count++;
        }
    }
    //swapping
    int temp=arr[si+count];
    arr[si+count]=arr[si];
    arr[si]=temp;
    int i=si,j=ei;
    while(i<(si+count) && j>(si+count)){
            //if front element is correctly placed
            if(arr[i]<=arr[si+count]){
                i++;
            }
            //if back element is correctly placed
            else if(arr[j]>arr[si+count]){
                j--;
            }
            //if both not swap
            else{
                int t=arr[j];
                arr[j]=arr[i];
                arr[i]=t;
                i++;
                j--;
            }
            
        }
    return (si+count);
}

void quick_sort(int * arr,int si,int ei){
    if(si>=ei){
        return;
    }
    int ci=partition(arr,si,ei);
    quick_sort(arr,si,ci-1);
    quick_sort(arr,ci+1,ei);
}

int main(){
    int n,arr[50];
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}