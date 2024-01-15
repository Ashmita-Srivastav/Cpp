#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of elements:";
    cin>>n;
    int array[n];
    for(int i=0; i<n ; i++){
        cout<<"Enter the element:";
        cin>>array[i];
    }
    int count=0;
    for(int i=0 ;i<n;i++){
        if (array[i]==0){
            count++;
            i++;
        }
    }
    for(int i=0;i<=count;i++){
        array[i]=0;
    }
     for(int i=count+1;i<n;i++){
        array[i]=1;
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    
}