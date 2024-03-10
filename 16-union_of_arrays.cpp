#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector < int > sortedArray(vector < int > a, vector < int > b) {
    for(int i=0;i<b.size();i++)
    {
        a.push_back(b[i]);
    }
    sort(a.begin(),a.end());
   auto it=unique(a.begin(),a.end());
   a.erase(it,a.end());
    return a;
   
}
int main(){
    //array-1
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int p;
    vector<int> a(n);
    for (int i=0;i<n;i++){
        cout<<"Enter the element:";
        cin>>p;
        a.push_back(p);
    }
    //array-2
    int m;
    cout<<"Enter the number of elements:";
    cin>>m;
    int q;
    vector<int> b(m);
    for (int i=0;i<m;i++){
        cout<<"Enter the element:";
        cin>>q;
        b.push_back(q);
    }

    vector<int>ans= sortedArray(a,b);
    for(auto &it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
   
}

