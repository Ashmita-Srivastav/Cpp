#include<bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    n=a.size();
    int count=0;
    for(auto it=a.begin();it!=a.end();){
        if(*it==0){
            count++;
            it=a.erase(it);

        }
        else{
            ++it;
        }
    }
    for(int i=0;i<count;i++){
        a.push_back(0);
    }
    return a;
}
int main(){
     int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int a;
    vector<int> v(n);
    for (int i=0;i<n;i++){
        cout<<"Enter the element:";
        cin>>a;
        v.push_back(a);
    }
    vector<int>ans= moveZeros(n, v);
    for(auto &it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
   
}
