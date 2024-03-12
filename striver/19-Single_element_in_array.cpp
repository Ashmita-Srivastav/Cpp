#include<bits/stdc++.h>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       for(int i=1;i<nums.size();i+=2)
       {
           if(nums[i]!=nums[i-1])
               return nums[i-1];
       } 
       return nums[nums.size()-1];
}
int main(){
    int N = 6;
    vector<int> a = {2,2,1};
    int ans = singleNumber(a);
    cout << ans << endl;
    return 0;
}