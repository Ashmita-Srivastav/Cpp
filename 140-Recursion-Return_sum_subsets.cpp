#include<iostream>
using namespace std;
int subs_sum(int n, int arr[], int k, int output[][50]){
    if(n==0){
        if(k==0){
        output[0][0]=0;
        return 1;
        }
        else
            return 0;
    }
    int s1= subs_sum(n-1,arr+1,k,output); //without first element
    int s2= subs_sum(n-1,arr+1,k-arr[0],output+s1); //with first element
    int smalloutputsize=s1+s2;
    for(int i=s1;i<smalloutputsize;i++){
        for(int j=output[i][0];j>0;j--){
            output[i][j+1]=output[i][j];
        }
        output[i][1]=arr[0];
        output[i][0]++;
    }
    return smalloutputsize;
}
int main(){
    int n,arr[50],k,output[50][50];
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the sum:";
    cin>>k;
    int c=subs_sum(n,arr,k,output);
    for(int i=0;i<c;i++){
        for (int j = 1; j < output[i][0]+1; j++)
        {
            cout<<output[i][j]<<" ";
        }
        cout<<endl;
        
    }
}