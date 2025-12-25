// Problem 62: Unique Paths
// Approach: DP / Top-down recursion with memoization
// Time Complexity: O(m * n)
// Space Complexity: O(m * n)

class Solution {
public:
    int fun(int i,int j,vector<vector<int>>&dp)
    {
        if(i==0 && j==0)  return 1;
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int u=fun(i-1,j,dp);
        int l=fun(i,j-1,dp);
        return dp[i][j]=u+l;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return fun(m-1,n-1,dp);
    }
};
