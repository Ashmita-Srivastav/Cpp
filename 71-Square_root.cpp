#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number:";
    cin>>n;
    int x=1;
    int y;
    while(n!=0){
        y=x*x;
        if(y>n){
            x--;
            cout<<x;
            return 0;
        }
        x++;
    }
}