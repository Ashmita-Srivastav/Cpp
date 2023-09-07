#include <iostream>
using namespace std;
int main(){
    int ch;
    cout<<"Enter 1 or 2(1-circle , 2 - rectangle): ";
    cin >> ch;
    if(ch == 1){
        double a;
        cin >> a;
        double area = 3.14*a*a;
        cout << area;
    }
    else if(ch == 2){
        double a, b;
        cin >> a >> b;
        double area = a*b;
        cout << area;
    }
}