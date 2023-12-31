#include <iostream>
using namespace std;
void printarray(int input[],int n){
    //cout<<"Function:"<<sizeof(input)<<endl;
    cout<<"Print:"<<endl;
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int input[100];
    cout<<"Enter array elements:";
    cout<<input<<endl;

    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    //cout<<"Main:"<<sizeof(input)<<endl;
    printarray(input,n);
}
