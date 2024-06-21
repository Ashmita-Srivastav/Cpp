#include<bits/stdc++.h>
using namespace std;
void pair_star(char str[],char temp[]){
    if(str[0]=='\0'){
        return;
    }
    int len=strlen(str);
    int a;
    if(str[0]==str[1]){
            a=0;
            for(int i=len;i>a;i--){
                str[i+1]=str[i];
            }
        str[a+1]='*';
    }
    pair_star(str+1,temp);
}
int main(){
    char str[50],temp[70];
    cout<<"Enter the string:";
    cin>>str;
    pair_star(str,temp);
   
   cout <<str;

}