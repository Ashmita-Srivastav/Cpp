#include <iostream>
using namespace std;
int main(){
    int i;
    cout<<"Enter the number of elements:";
    cin>>i;
    int input[i];
    int s=0;
    for(;s<i;s++){
        cout<<"Enter the element:";
        cin >> input[s];
        cout<<endl;
    }
    int q;
    cout<<"Enter the element to search:";
    cin>>q;
    
for(int s=0;s<i;s++){
        if(q==input[s]){
            cout<<s;
            break;
        } 
    }
    cout<<-1;
    //break;

}