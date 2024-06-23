#include<bits/stdc++.h>
using namespace std;
void remove_dupes(char str[]){
    if(str[0]=='\0' && str[1]=='\0'){
        return;
    }
    if(str[0]!= str[1]){
        remove_dupes(str+1);
    }
    else{
        int i=2;
        for(;str[i]!='\0';i++){
            str[i-1]=str[i];
        }
    str[i-1]=str[i];
    remove_dupes(str);
    }
}
int main(){
    char str[50];
    cout<<"Enter the string:";
    cin>>str;
    remove_dupes(str);
    cout<<str;
}