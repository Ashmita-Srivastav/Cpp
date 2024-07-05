#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[50],ch[50],a[10];
    cout<<"Enter the string:";
    cin>>str;
    cout<<"Enter the character:";
    cin>>a;
    int j=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!= a[0]){
            ch[j++]=str[i];
        }
    }
    ch[j]='\0';
    cout<<ch;
}
