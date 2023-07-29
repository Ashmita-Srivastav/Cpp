#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin>> n;
    int s=0;
    int i=2;
    while(i<=n){
        s=s+i;
        i=i+2;

    }cout<<"The sum of even integers upto"<<" "<<n<<" "<<"is:"<<s;
} 