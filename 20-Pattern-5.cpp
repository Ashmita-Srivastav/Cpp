#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows:";

    cin >> n;

    int i = 1;
    int c = 1;
    while(i <= n){
        int j =1;
        int v = i;
        int k=1;
            while(k<=n-i){
                cout<<" ";
                k=k+1;
            }
            while(j<=i){
            cout<<v;
            v = v + 1;
            j  = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
