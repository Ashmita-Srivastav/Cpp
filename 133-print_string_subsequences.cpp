#include<bits/stdc++.h>
using namespace std;
void print_subs(string input, string output){
    if(input.empty()){
        cout<<output<<endl;
        return;
    }
    print_subs(input.substr(1),output);
    print_subs(input.substr(1),output+input[0]);
}
int main(){
    string input;
    cout<<"Enter the string:";
    cin>>input;
    string output= "";
    print_subs(input,output);
}