// Problem 2328: Number of Increasing Paths in a Grid
// Approach: DP / DFS with Memoization
// Time Complexity: O(m * n)  (each cell computed once)
// Space Complexity: O(m * n)  (for DP array + recursion stack)

class Solution {
public:
int fun(int i,int j,vector<vector<int>>&matrix,vector<vector<int>>&dp)
    {
        int m=matrix.size();
        int n=matrix[0].size();
        int mod=1e9+7;
        if(dp[i][j]!=-1) return dp[i][j];
        vector<pair<int,int>>dir={{0,1},{1,0},{0,-1},{-1,0}};
        int p=0;
        for(auto [dx, dy] : dir) {
            int ni = i + dx, nj = j + dy;
            if(ni >= 0 && ni < m && nj >= 0 && nj < n && matrix[ni][nj] > matrix[i][j]) {
               p+=fun(ni, nj, matrix, dp);
            }
        }
        return dp[i][j] = (p+1)%mod;
    }
    int countPaths(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int mod=1e9+7;
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans=(ans+fun(i,j,matrix,dp))%mod;
            }
        }
        return ans;
    }
};
