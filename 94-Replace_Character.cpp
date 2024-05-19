#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main(){
    char str[50];
    char c1[10], c2[10];
    cout<<"Enter the string:";
    cin.getline(str,50);
    cout<<"Enter the character to be replaced:";
    cin>>c1;
    cout<<"Enter the character:";
    cin>>c2;
    int l = strlen(str);
    for (int i = 0; i < l; i++) {
        if (str[i] == *c1){
            str[i] = *c2;
        }
    }
    cout<<str;
   
}