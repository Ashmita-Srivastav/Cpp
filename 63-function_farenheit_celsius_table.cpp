#include <iostream>
using namespace std;
int farenheit(int S, int E,int W){
    while(S<=E){
        int C = (S-32)*5/9;
        cout << S <<" "<<C<<endl;
        S = S+W;
    }
    return S;

}
int main(){
    int S;
    cout<<"Ente the start Farenheit value:";
    cin>>S;
    int E;
    cout<<"Ente the end Farenheit value:";
    cin>>E;
    int W;
    cout<<"Ente the Step size:";
    cin>>W;
    int k=farenheit(S,E,W);
    cout<<k;
}
   