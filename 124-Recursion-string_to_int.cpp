#include<bits/stdc++.h>
using namespace std;
void convertstr(char str[]){
    int a=str[0];
    if(a>=48 && a<=57 || a==0 )
    {   if(str[0]=='\0'){
            return;
        }
        cout<<a-48;
        convertstr(str+1);
    }
    else{
        cout<<"\nyou did not follow input guidance I am ending this imeediately ಥ_ಥ";

    }
}
int main(){
    char str[50];
    cout<<"Enter the string:";
    cin>>str;
    convertstr(str);
}