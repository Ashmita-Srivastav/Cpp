#include<bits/stdc++.h>
#include<vector>
using namespace std;
/*int longestSubarrayWithSumK(vector<int> a, long long k) {
  int n=a.size();
  long long sum=a[0];
  int Len=0;
  int i=0,j=0;
  while(i<n)
  {
    while(j<=i && sum>k)
    {
        sum -= a[j];
        j++;
    }
    if(sum == k)
    {
        Len= max(Len,i-j+1);
    }
    i++;
    if(j<n)
    {
        sum += a[i];
    }
  }
    return Len;
}*/
int main(){
    int N = 7;
    int k=3;
    int a[] = {1, 2, 3, 1, 1, 1, 1};
    //int ans = longestSubarrayWithSumK(a,k);
    //cout << ans << endl;
    auto it=a.begin();
    cout<< it;
    return 0;
}
