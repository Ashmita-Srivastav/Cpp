#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[50],c;
    cout<<"Enter the string:";
    cin>>str;
    int count=0,max=count;
    for(int i=0;str[i]!='\0';i++){
        count=0;
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(max<count){
            max=count;
            c=str[i];
            
        }
    }
    int s=c;
    cout<<c<<s;
    

}



#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[50],c;
    int freq[256]= {0};
    int i=0,j=i+1;
    cout<<"Enter the string:";
    cin>>str;
    int n=strlen(str);
    while(i<n){
        int count=1;
        while(str[j]!='\0'){
            if(str[i]==str[j]){
                count++;
                j++;
            }
            j++;
        }
        if(str[i]!=str[i-1])
        {freq[str[i]]=count;
        }
        i++;
    }

    //printing
    for(int i=0;i<256;i++){
        cout<<freq[i];
    }

    char ans=str[0];
    int max=freq[str[0]];
    for(i=1;str[i]!='\0';i++){
        if(max<freq[str[i]]){
            max=freq[str[i]];
            ans=str[i];
        }
    }
    cout<<endl;
    cout<<ans;
    }
