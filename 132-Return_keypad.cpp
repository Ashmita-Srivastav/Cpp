#include<bits/stdc++.h>
using namespace std;
int keypad(int n, string output[]){
    string input;
    if(n==0 || n==1){
        output[0]="";
        return 1;  
    }
    int num=n%10;
    n=n/10;
    int smalloutputsize = keypad(n,output);
    switch(num){
        case 2: input = "abc";
            break;
        case 3: input = "def";
            break;
        case 4: input = "ghi";
            break;
        case 5: input = "jkl";
            break;
        case 6: input = "mno";
            break;
        case 7: input = "pqrs";
            break;
        case 8: input = "tuv";
            break;
        case 9: input = "wxyz";
            break;
    }
    int ans_size=smalloutputsize*(input.size());
    string temp[ans_size];
    int i=0;
    for(int j=0; j<smalloutputsize; j++){
        for(int k=0; k<input.size(); k++){
            temp[i]= output[j] + input[k];
            i++;
        }
    }
    for(int i=0;i<ans_size;i++){
        output[i]=temp[i];
    }
    return input.size()*smalloutputsize;
}
int main(){
    int n;
    cout<<"2-a b c"<<endl<<"3-d e f"<<endl<<"4-g h i"<<"5-j k l"<<endl<<"6-m n o"<<endl<<"7-p q r s"<<endl<<"8-t u v"<<endl<<"9-w x y z"<<endl<<"0 and 1-empty"<<endl;
    cout<<"Enter the digits:";
    cin>>n;
    string* output= new string[100]; 
    for(int i=0;i<keypad(n,output);i++){
        cout<<output[i]<<endl;
    }
}