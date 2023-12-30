#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int input[n];
   if(n%2==0){
      for(int i=0;i<n;i++){
        if(i<n/2){
            input[i]=2*i+1;
        }else{
            input[i]=(n-i)*2;
        }
      }
   }
   else{
     for(int i=0;i<n;i++){
       if(i<=n/2){
            input[i]=2*i+1;
        }else{
            input[i]=(n-i)*2;
        } 
   }
   }
   for(int i=0;i<n;i++){
        cout << input[i]<<" ";
    }

}
