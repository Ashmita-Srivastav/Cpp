#include <iostream>
using namespace std;
int main(){
    float S;
    cout<<"Ente the start Farenheit value:";
    cin>>S;
    float E;
    cout<<"Ente the end Farenheit value:";
    cin>>E;
    float W;
    cout<<"Ente the Step size:";
    cin>>W;
    while(S<=E){

        int C = (S-32)*5/9;
        cout << S <<" "<<C<<endl;
        S = S+W;
    }
}
        

