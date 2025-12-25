// Problem 1293: Paths in Matrix Whose Sum Is Divisible by K
// Approach: DP / Backtracking
// Time Complexity: O(m * n * k)
// Space Complexity: O(m * n * k)

class Solution {
public:
    int fun(int i,int j,int sum,vector<vector<int>>&grid,int k,vector<vector<vector<int>>>&dp)
    {
        int m=grid.size();
        int n=grid[0].size();
        const int mod=1e9+7;
        if(i==m-1 && j==n-1)
        {
            if(sum%k==0) return 1;
            return 0;
        }
        if(dp[i][j][sum]!=-1) return dp[i][j][sum];
        int ans=0;
        if(i+1<m) ans=(ans+fun(i+1,j,(sum+grid[i+1][j])%k,grid,k,dp))%mod;
        if(j+1<n) ans=(ans+fun(i,j+1,(sum+grid[i][j+1])%k,grid,k,dp))%mod;
        return dp[i][j][sum]=ans;
    }
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        vector<vector<vector<int>>>dp(m, vector<vector<int>>(n, vector<int>(k, -1)));
        return fun(0,0,grid[0][0]%k,grid,k,dp);
    }
};
