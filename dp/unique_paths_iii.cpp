// Problem 980: Unique Paths III
// Approach: DFS / Backtracking
// Time Complexity: O(4^(m*n)) in worst case
// Space Complexity: O(m * n) recursion stack

class Solution {
public:
    int df(int i,int j,vector<vector<int>>&grid,int c,int t)
    {
        int m=grid.size(),n=grid[0].size();
        if(i<0 || j<0 || i>=m||j>=n||grid[i][j]==-1) return 0;

        if(grid[i][j]==2)
        {
            if(c==t) return 1;
            else return 0;
        }
        int temp=grid[i][j];
        grid[i][j]=-1;
        int p=0;
        p+=df(i+1,j,grid,c+1,t);
        p+=df(i,j+1,grid,c+1,t);
        p+=df(i-1,j,grid,c+1,t);
        p+=df(i,j-1,grid,c+1,t);
        grid[i][j]=temp;
        return p;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,26));
        int st=0,cnt=0,e=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0) cnt++;
                else if(grid[i][j]==1)
                {
                    st=i;e=j;
                }
            }
        }
        cnt++;
        return df(st,e,grid,0,cnt);
    }
};
