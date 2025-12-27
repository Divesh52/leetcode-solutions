// Problem 174: Dungeon Game
// Approach: Top-Down Dynamic Programming (Recursion + Memoization)
// Time Complexity: O(m * n)
// Space Complexity: O(m * n)


class Solution {
public:
    int fun(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&dp)
    {
        int m=grid.size();
        int n=grid[0].size();
        if(i<0||j<0||i>=m||j>=n) return INT_MAX;
        if(i==m-1 &&j==n-1) return max(1,1-grid[i][j]);
        if(dp[i][j]!=-1) return dp[i][j];
        int p1=fun(i+1,j,grid,dp);
        int p2=fun(i,j+1,grid,dp);
        int mini=min(p1,p2);
        int res=max(1,mini-grid[i][j]);
        return dp[i][j]=res;
    }
    int calculateMinimumHP(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return fun(0,0,grid,dp);
    }
};
