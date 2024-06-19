#include<bits/stdc++.h>
using namespace std;
void replace(char str[]){
    if(str[0]=='\0'){
        return;
    }
    replace(str+1);
    int len=strlen(str);
    if(str[0]=='p' && str[1]== 'i'){
        for(int i=len;i>=2;i--)
        {   str[i+2]=str[i];
        }
        str[0]='3';
        str[1]='.';
        str[2]='1';
        str[3]='4';
    } 
    
}
int main(){
    char str[50];
    cout<<"Enter the string: ";
    cin>>str;
    for (auto& x : str) { 
        x = tolower(x); 
    }
    replace(str);
    cout<<str<<" ";
}