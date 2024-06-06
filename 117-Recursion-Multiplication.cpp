#include <iostream>
using namespace std;
int mul(int x,int y){
    static int sum=0;
    if(y==0){
        return 0;
    }
    sum=sum+x;
    mul(x,y-1);
    return sum;

}
int main(){
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<mul(a,b);
}