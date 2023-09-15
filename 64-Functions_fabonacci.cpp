#include <iostream>
using namespace std;
int Fibonacci(int i,int a,int b, int d, int n){
    for(; i<n-1;i++){
        d=a+b;
        a=b;
        b=d;
    }
    return d;
}
int main(){
    // fabonacci series: 0,1,1,2,3,5,8,13.....
    int n;
    cout << "Enter the fibonacci term:";
    cin >> n;
    int i=0; 
    int a=0;
    int b=1;
    int d=0;
    int g = Fibonacci(i,a,b,d,n);    
    cout<<g;

}
