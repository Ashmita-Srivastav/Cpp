#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a nuber:";
    cin>>n;
    int evensum=0;
    int oddsum=0;
    while(n>=1){
        int s=n%10;
        if(s%2==0){
            evensum=evensum+s;  
                        
        }else if(s%2!=0) {
            oddsum=oddsum+s;
       }
    
    n=n/10;
    }
    cout<<"even sum:"<<evensum;
    cout<<"odd sum:"<<oddsum;
        
}
