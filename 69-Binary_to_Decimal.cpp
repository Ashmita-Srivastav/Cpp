#include <iostream>
using namespace std;
int main(){
    int N;
    cout << "Enter the binary number:";
    cin>>N;
    int i;
    int t = 0;
    int count = 1;
    while(N!=0){
        i=N % 10;
        t= (i* count) + t;
        N = N/10;
        count = count*2;
    }
    cout<<t;
}
