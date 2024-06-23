#include <bits/stdc++.h>
using namespace std;
void merge(int * arr, int si, int mid, int ei){
    int l=mid-si+1;
    int r=ei-mid;
    int al[l],ar[r];
    for(int i=0;i<l;i++){
        al[i]=arr[i+si];
    }
    for(int i=0;i<r;i++){
        ar[i]=arr[mid+1+i];
    }
    int i=si;   //for main array
    int j=0;    //for leftarray
    int k=0;    //for rightarray
    while(j<l && k<r){
        if(al[j]<=ar[k]){
            arr[i]=al[j];
            j++;
        }
        else{
            arr[i]=ar[k];
            k++;
        }
        i++;
    }
    while(j<l){
        arr[i]=al[j];
        i++;
        j++;
    }
    while(k<r){
        arr[i]=ar[k];
        i++;
        k++;
    }
    delete[] al;
    delete[] ar;

}

void merge_sort(int * arr,int si,int ei){
    if(si<ei){
        int mid=(si+ei)/2;
        merge_sort(arr,si,mid);
        merge_sort(arr,mid+1,ei);
        merge(arr,si,mid,ei);
    }
}

int main(){
    int n,arr[50];
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}