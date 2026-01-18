// Problem 40: Combination Sum II
// Approach: Backtracking
// Time Complexity: O(2^n) 
// Space Complexity: O(n) 


class Solution {
public:
    void fun(int i,vector<int>&temp,vector<int>&nums,int target,vector<vector<int>>&dp)
    {
        if(target==0)
        {
            dp.push_back(temp);
            return;
        }
        for(int j=i;j<nums.size();j++)
        {
            if(target<0) break;
            if (j>i && nums[j] == nums[j-1]) continue;
            temp.push_back(nums[j]);
            fun(j+1,temp,nums,target-nums[j],dp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<vector<int>>dp;
        vector<int>out;
        sort(nums.begin(),nums.end());
        fun(0,out,nums,target,dp);
        return dp;
    }
};
