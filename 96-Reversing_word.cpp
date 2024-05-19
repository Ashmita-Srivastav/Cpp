#include<bits/stdc++.h>
using namespace std;
int main(){
    char str1[100],str2[100];
    cout<<"Enter the string:";
    cin.getline(str1,100);
    int l=strlen(str1);
    int i=l-1,j=0;
    while(str1[i]){
        if(str1[i]==' '){
            
            for(int k=i+1;k<=s && k<l;k++){
                str2[j]=str1[k];
                j++;
            }
            int s=i;
            i--;
        }
        i--; 
        cout<<" ";
    }
    cout<<str2;
}