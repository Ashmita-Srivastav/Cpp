#include<iostream>
using namespace std;
int main()
{
    int count=0;
    int n;
    cout<<"Enter the no. of elements:";
    cin>>n;
    int array[n];
    for(int i=0; i<n ; i++){
        cout<<"ENter the element:";
        cin>>array[i];
    }
    int s;
    cout<<"Enter the sum:";   
    cin>>s;
    
    for(int i=0; i<n;i++){
        for(int j=i+1; j<n;j++){
            for(int k=j+1;k<n;k++)
            {    int sum=array[i]+array[j]+array[k];
                if(s==sum)
                {
                    count=count+1;
                }
            }
        }
    }
    cout<<count;
}
