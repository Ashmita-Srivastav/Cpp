#include <iostream>
using namespace std;

int main(){
    char c;
    cout<<"enter:";
    c=cin.get();
    int count=0;
    while(c!='$'){
        count++;
        c=cin.get();
    }
    cout<<count<<endl;
}
