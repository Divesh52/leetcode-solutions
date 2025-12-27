// Problem 120: Triangle
// Approach: Bottom-Up Dynamic Programming
// Time Complexity: O(n²)
// Space Complexity: O(n²)


class Solution {
public:
    int minimumTotal(vector<vector<int>>& tr) {
        int n=tr.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++) dp[n-1][i]=tr[n-1][i];
        for(int i=n-2;i>=0;i--)
        {
            for(int j=i;j>=0;j--)
            {
                int d=dp[i+1][j]+tr[i][j];
                int di=dp[i+1][j+1]+tr[i][j];
                dp[i][j]=min(d,di);
            }
        }
        return dp[0][0];
    }
};
