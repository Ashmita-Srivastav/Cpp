#include<bits/stdc++.h>
//#include<cstring>
using namespace std;
int main(){
    char str[50];
    cout<<"Enter the string:";
    cin.getline(str,50);
    int len=strlen(str);
     int i = 0, j = 0; 
    while (str[i]) 
    { 
        if (str[i] != ' ') 
        {   
            str[j++] = str[i];
        } 
        i++; 
    } 
    str[j] = '\0'; 

    cout<<str ;
    
}