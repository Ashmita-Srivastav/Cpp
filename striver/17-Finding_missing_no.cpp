#include<bits/stdc++.h>
#include<vector>
using namespace std;
int missingNumber(vector<int>& nums,int N) {
        sort(nums.begin(), nums.end());  
        N = nums.size();
        if (nums[0] != 0) {return 0;}
        if (nums[N - 1] != N) {return N;}
        for (int i = 1; i < N; ++i) {
            if (nums[i] != nums[i - 1] + 1) {
                return nums[i - 1] + 1;
            }
        }
        return -1;  
}
int main(){
    int N = 6;
    vector<int> a = {0,1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}