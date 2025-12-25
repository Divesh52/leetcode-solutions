// Problem 45: Jump Game II
// Approach: DP / Top-Down Recursion with Memoization
// Time Complexity: O(n^2)  
// Space Complexity: O(n)

class Solution {
public:
    int fun(int i,vector<int>&nums,vector<int>&dp)
    {
        int n=nums.size();
        if(i>=n) return INT_MAX;
        if(dp[i]!=-1) return dp[i];
        if(i==n-1) return 0;

        int cnt=INT_MAX;
        for(int j=1;j<=nums[i];j++)
        {
            int x=fun(j+i,nums,dp);
            if(x!=INT_MAX)
            {
                cnt=min(cnt,x+1);
            }
        }
        return dp[i]=cnt;
    }
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return fun(0,nums,dp);
    }
};
