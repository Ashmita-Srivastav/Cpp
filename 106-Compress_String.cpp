#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[50];
    cout<<"Enter the string:";
    cin>>str;
    int n=strlen(str);
    for(int i=0;i<n;i++){
        if(str[i]!=str[i-1]){
            int count=1;
            for(int j=i+1;j<n;j++){
                if(str[i]==str[j])
                {   count++;
                }
                else{
                    break;
                }   
            }
            if(count!=1){
                cout<<str[i]<<count;
            }
            else{
                cout<<str[i];
            }
        }
    }
    
}
