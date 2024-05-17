#include<bits/stdc++.h>
using namespace std;
int length(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char str[50];
    cin>>str;
    int len=length(str);
    int count=0;
    for(int i=0;i<len;i++){
            if(str[i]!= str[len-i-1]){
                count=1;
                break;
            }
    }
    if(count==0){
        cout<<"It is palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
}
