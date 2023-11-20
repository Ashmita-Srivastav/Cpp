#include <iostream>
using namespace std;
int main(){
    char c;
    c=cin.get();
    int d=0;  //chars
    int i=0;  //int
    int f=0;  //spaces
    while(c!='$'){
        if(islower(c)){
            d++;
            c=cin.get();
        }else if(isdigit(c)){
            i++;
            c=cin.get();
        }else if(c=' '|| c=='\n'||c=='\t'){
            f++;
            c=cin.get();
        }
    }   
    cout<<d<<i<<f;
}
