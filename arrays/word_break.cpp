// Problem 139: Word Break
// Approach: Dynamic Programming / Substring Check
// Time Complexity: O(n * m)  
// Space Complexity: O(n + k)

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        unordered_set<string>st;
        st.insert(wordDict.begin(),wordDict.end());
        vector<bool>dp(n+1);
        dp[0]=true;int maxi=0;
        for(auto i:wordDict)
        {
            maxi=max(maxi,(int)i.size());
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=i-1;j>=max(0,i-maxi);j--)
            {
                if(dp[j] && st.count(s.substr(j,i-j)))
                {
                    dp[i]=true;
                    break;
                }
            }
        }
        return dp[n];
    }
};
