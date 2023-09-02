#include <iostream>
using namespace std;
int main(){
    int i=1;
    //using while loop
    while(i<10){
        if(i==7){
            i++;
            continue;
        }
        cout<<i<<endl;
        i++;
    }
    cout<<"------------------------"<<endl;
    //using for loop
    for(int j=1;j<10;j++){
        if(j==7){
            continue;
        }
        cout<<j<<endl;
        
    }
    
}