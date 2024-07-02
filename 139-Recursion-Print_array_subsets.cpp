#include<iostream>
using namespace std;
void subsets(int n, int arr[], int output[], int m){
    if(n==0){
        cout<<"[";
        for(int i=0;i<m;i++){
            cout<<output[i];
        }
        cout<<"]"<<endl;
        return;
    }
    subsets(n-1,arr+1,output,m); //not included
    int newoutput[m+1]={};
    for(int i=0;i<m;i++){
        newoutput[i]=output[i];
    }
    newoutput[m]=arr[0];
    subsets(n-1,arr+1,newoutput,m+1);

}
int main(){
    int n,arr[50],m=0;
    int output[50]={};
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    subsets(n,arr,output,m);
}