#include <iostream>
using namespace std;
int main(){
    int X;
    cout<<"Enter the number of terms:";
    cin >> X;
    int n=1;
    int i=1;
    int S;
    while(i<=X){
        S = 3*n+2;
        if (S%4!=0){
            cout<<S<<" ";
            i++;
        }
        n++;
    }   
}