#include<bits/stdc++.h>
using namespace std;
void permu(char str1[],char str2[]){
    int len1=strlen(str1);
    int len2=strlen(str2);
    if(len1!=len2){
        cout<<"false";
    }
    else{
        int count=0;
        for(int i=0;i<len1;i++){
            for(int j=0;j<len1;j++){
                if(str1[i]== str2[j]){
                    count++;
                }
            }
        }
        if(count!=len1){
            cout<<"false";
        }
        else{
            cout<<"true";
        }
       
    }
}
int main(){
    char str1[50],str2[50];
    cout<<"Enter a string 1:";
    cin>>str1;
    cout<<"Enter a string 2:";
    cin>>str2;
    permu(str1,str2);
}
