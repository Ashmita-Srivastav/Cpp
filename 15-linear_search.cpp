#include<bits/stdc++.h>
#include<vector>
using namespace std;
int linearSearch(int n, int num, vector<int> &arr)
{
    n=arr.size();
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num){
            return i;
            break;
        }
    }
    return -1;
}
int main(){
     int n=4;
     cout<<"The array is:"<<"1,2,3,4,5"<<endl;
    int num;
    cout<<"Enter the number:";
    cin>>num;
    vector<int> a={1,2,3,4,5};
    int ans= linearSearch(n,num, a);
    printf("%d",ans);
}
