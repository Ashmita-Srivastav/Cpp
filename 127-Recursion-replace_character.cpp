#include<bits/stdc++.h>
using namespace std;
void replace_character(char s[],char c1,char c2){
    if(s[0]=='\0'){
        return;
    }

    if(s[0]== c1){
        s[0] = c2;
    }
    replace_character(s+1,c1,c2);
}
int main(){
    char str[50],c1,c2;
    cout<<"Enter the string:";
    cin>>str;
    cout<<"Enter the character to be replaced:";
    cin>>c1;
    cout<<"Enter the replacing character:";
    cin>>c2;
    replace_character(str,c1,c2);
    cout<<str;
}