#include <iostream>
using namespace std;
int main(){
    int N;
    cout << "Enter the number of rows:";
    cin >> N;
    int i=1;
    while (i<=N){
        int j=1;
        while(j<=N){       
        cout<<'*';
        j=j+1;
        }
    cout<<endl;
    i=i+1;
    }
}