#include<iostream>
#include<math.h>
using namespace std;
int subsets(int n, int arr[],int output[][50]){
    if(n<=0){
        output[0][0]={};
        return 1;
    }
    
    int small_output=subsets(n-1,arr+1,output);
    cout<<output[4][4]<<endl;
    for(int i=0;i<small_output;i++){
        output[i+small_output][0] = output[i][0] +1;
        output[i+small_output][1]= arr[0];
    }
    for(int i=0;i<small_output;i++){
        for(int j=1;j<output[small_output+i][0];j++){
            output[i+small_output][j+1]=output[i][j];
        }
    }
    return 2*small_output;
}

int main(){
    int n, arr[50];
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    int output[50][50];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c=subsets(n,arr,output);
    cout<<"THe subsets are:"<<endl;
    for(int i=0;i<c;i++){
        cout << "[";
        for(int j=1;j<=output[i][0];j++){
            cout<<output[i][j];
            if(j<output[i][0]){
                cout<<",";
            }
        }
        cout<<"]"<<endl;
    }
    
    
}