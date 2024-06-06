#include<iostream>
using namespace std;
int all_index(int a[],int n, int e ,int output[]){
    if(n==0){
        return 0;
    }
    int so=all_index(a+1,n-1,e,output);
    if(a[0]==e){
        for(int i=so-1;i>=0;i--){
            output[i+1]=output[i]+1;
        }
        output[0]=0;
        so++;
    }
    else{
        for(int i=so-1;i>=0;i--){
            output[i]=output[i]+1;
        }
    }
    return so;
}
void AllIndexes(int a[], int n, int e)
{
    int output[n];
    int size = all_index(a, n,e, output);
    for (int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
}
int main(){
    int a[50],n,e,output[20];
    cout<<"Enter number of elements:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the number:";
    cin>>e;
    AllIndexes(a, n, e);
}