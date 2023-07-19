#include <iostream>
using namespace std;

int main(){
   int age;
   cout<<"Enter you age:";
   cin >> age;
   if(age<18){
      cout<<"You are not yet an adult"<<endl;
   } else{
      cout<<"You are an adult"<<endl;
   }
}