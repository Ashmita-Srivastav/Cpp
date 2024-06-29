#include<bits/stdc++.h>
using namespace std;
void keypad(int n, string output){
    string input;
    if(n==0 || n==1){
        cout<<output<<endl;
        return;  
    }
    int num=n%10;
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
    int j=(input.size());
    for(int i=0;i<j;i++){
        keypad(n/10,input[i]+output);
    }
}
void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    keypad(num,"");
    
}

int main(){
    int n;
    cout<<"2-a b c"<<endl<<"3-d e f"<<endl<<"4-g h i"<<"5-j k l"<<endl<<"6-m n o"<<endl<<"7-p q r s"<<endl<<"8-t u v"<<endl<<"9-w x y z"<<endl<<"0 and 1-empty"<<endl;
    cout<<"Enter the digits:";
    cin>>n;
    string* output= new string[100]; 
   printKeypad(n);
}