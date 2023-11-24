#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter two numbers:";
    cin >> a >> b;

    if (a==b){
        cout << "The numbers are equal"<<endl;
    } else if (a<b){
        cout<<"first number is smaller"<<endl;
    } else{
        cout<<"first number is greater"<<endl;
    }
}
