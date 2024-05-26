#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[50],ch[50];
    cout<<"Enter the string:";
    cin>>str;
    int j=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=str[i+1]){
            ch[j++]=str[i];
        }
    }
    ch[j]='\0';
    cout<<ch;


}