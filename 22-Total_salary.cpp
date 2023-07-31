#include<iostream>
using namespace std;
int main(){
    int basic;
    cout<<"Enter your basic salary:Rs";
    cin>>basic;
    cout<<"Enter the grade(A,B,C):";
    char grade;
    cin>>grade;
    int hra;
    int da;
    int allow;
    int pf;
    
    if (basic<=7500000 && basic>=0 ){
        hra=0.2*basic;
        da =0.5*basic;
        pf =0.11*basic;
        if(grade=='A'){
            allow = 1700;
        }else if(grade=='B'){
            allow = 1500;
        }else if(grade=='C'){
            allow = 1300;
        }
        int ts = basic+hra+da+allow-pf;
        cout<<ts;
    }
}