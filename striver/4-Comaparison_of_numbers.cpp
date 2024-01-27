#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    if (n>= -10000 && n<=10000 && m>= -10000 && m<=10000){
        if (n>m){
            cout<<"Greater";
        }
        else if (n<m){
            cout<<"Lesser";
        }
        else{
            cout<<"Equal";
        }
    }else{
        cout<<"Invalid input: Enter between -10000 and 10000";
    }

}
