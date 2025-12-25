// Problem 63: Unique Paths II (with Obstacles)
// Approach: DP / Top-down recursion with memoization
// Time Complexity: O(m * n)
// Space Complexity: O(m * n)


class Solution {
public:
    int df(int i,int j,vector<vector<int>>&dp,vector<vector<int>>&grid)
    {
        if(i==0 &&j==0) return 1;
        if(i<0||j<0) return 0;
        if(grid[i][j]==1) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int r=df(i-1,j,dp,grid);
        int d=df(i,j-1,dp,grid);
        return dp[i][j]=r+d; 
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        if (grid[0][0]==1||grid[m-1][n-1]==1) return 0;
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return df(m-1,n-1,dp,grid);
    }
};
