#include<bits/stdc++.h>
using namespace std;
void prefixes(char input[]){
    for(int i=0;input[i]!='\0';i++){
        for(int j=0;j<=i;j++){
            cout<<input[j];
        }
        cout<<endl;
    }
}
int main(){
    char str[100];
    cout<<"Enter the string:";
    cin.getline(str,100);
    prefixes(str);
}