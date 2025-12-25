// Problem 39: Combination Sum
// Approach: Backtracking / Recursion
// Time Complexity: Exponential in worst case (O(2^n))
// Space Complexity: O(target) recursion stack + O(k*solutions) for answer storage

class Solution {
public:
    void fun(int i,vector<int>&temp,vector<int>&nums,int target,vector<vector<int>>&dp)
    {
        if(target==0)
        {
            dp.push_back(temp);
            return;
        }
        if(i>=nums.size()||target<0) return;
        temp.push_back(nums[i]);
        fun(i,temp,nums,target-nums[i],dp);
        temp.pop_back();
        fun(i+1,temp,nums,target,dp);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>dp;
        vector<int>out;
        fun(0,out,nums,target,dp);
        return dp;
    }
};
