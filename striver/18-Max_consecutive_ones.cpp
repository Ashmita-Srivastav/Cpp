#include<bits/stdc++.h>
#include<vector>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int s=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count ++;
            }
            else{
                s=max(s,count);
                count= 0;
            }
        } 
        s=max(s,count);
        return s;
}
int main(){
    int N = 6;
    vector<int> a = {1,1,0,1,1,1};
    int ans = findMaxConsecutiveOnes(a);
    cout << ans << endl;
    return 0;
}