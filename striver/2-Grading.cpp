#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter the marks:";
    cin >> marks;
    if (marks<25){
        cout<<"The grade is F"<<endl;
    }else if(marks<=44){
        cout<<"The grade is E"<<endl;
    }else if(marks<=49){
        cout<<"The grade is D"<<endl;
    }else if(marks<=59){
        cout<<"The grade is C"<<endl;
    }else if(marks<=79){
        cout<<"The grade is B"<<endl;
    }else {
        cout<<"The grade is A"<<endl;
    }
}