#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin >> n;
    int x;
    int y;
    while(n!=0){
        x = n%10;
        n = n/10;
        cout << x;
    }
    
}
