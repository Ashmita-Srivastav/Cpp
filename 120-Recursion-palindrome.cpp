#include<bits/stdc++.h>
using namespace std;
int palindrome(char ch[],int len){
    if(len==len/2){
        return 1;
    }
    int i=len-1;
    if(ch[0]==ch[i]){
        return 0;
    }
    else{
        return 1;
    }
    palindrome(ch,len-1);

}
int main(){
    char ch[50];
    cout<<"Enter the string:";
    cin>>ch;
    int len = strlen(ch);
    if(palindrome(ch,len)==0){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}