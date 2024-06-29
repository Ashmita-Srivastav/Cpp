#include<bits/stdc++.h>
using namespace std;
int check_pattern(string input){
    if(input.empty()){
        return 6;
    }
    if(input[0]=='a'){
        if(input[1]== 'b' && input[2]=='b'){
            return 1;
            check_pattern(input.substr(3));
        }
        else if(input[1]=='a'){
            return 1;
            check_pattern(input.substr(2));
        }
        else{
            return 0;
        }
    }
    else{
        return 0;
    }
    
}

int main(){
    string input;
    cout<<"Enter the string:";
    cin>>input;
    int c=check_pattern(input);
    if(c==0)
        cout<<"false";
    else if(c==1)
        cout<<"true";
    else
        cout<<"njkds";
}