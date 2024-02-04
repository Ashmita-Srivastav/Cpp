#include<vector>
#include <iostream>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
     int k = 0;
     int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i] > nums[(i+1)]){
                k++;
            }
        }
        if(nums[0] < nums[n-1])
            k++;
        return (k<=1);
    }
};