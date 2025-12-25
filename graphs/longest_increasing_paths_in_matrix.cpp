// Problem 329: Longest Increasing Path in a Matrix
// Approach: DP / DFS with Memoization
// Time Complexity: O(m * n)  (each cell computed once)
// Space Complexity: O(m * n)  (for DP array + recursion stack)

class Solution {
public:
    int fun(int i,int j,vector<vector<int>>&matrix,vector<vector<int>>&dp)
    {
        int m=matrix.size();
        int n=matrix[0].size();
        if(i<0||j<0||i>=m||j>=n) return INT_MIN;
        if(dp[i][j]!=-1) return dp[i][j];
        vector<pair<int,int>>dir={{0,1},{1,0},{0,-1},{-1,0}};
        int m1=1;
        for(auto [dx, dy] : dir) {
            int ni = i + dx, nj = j + dy;
            if(ni >= 0 && ni < m && nj >= 0 && nj < n && matrix[ni][nj] > matrix[i][j]) {
                m1 = max(m1, 1 + fun(ni, nj, matrix, dp));
            }
        }
        return dp[i][j] = m1;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int res=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                res=max(res,fun(i,j,matrix,dp));
            }
        }
        return res;
    }
};
