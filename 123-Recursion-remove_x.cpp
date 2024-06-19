#include<bits/stdc++.h>
using namespace std;
void remove(char str[]){
    if(str[0]=='\0'){
        return;
    }
    remove(str+1);
    int len= strlen(str);

    if(str[0]=='x'){
        for(int i=0;i<len;i++){
            str[i]=str[i+1];
        }
    }
    
}
int main(){
    char str[50];
    cout<<"Enter the string:";
    cin>>str;
    for(auto&x : str){
        x=tolower(x);
    }
    remove(str);
    cout<<str;
}