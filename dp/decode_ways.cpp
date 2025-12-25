// Problem 91: Decode Ways
// Approach: Dynamic Programming / Iterative
// Time Complexity: O(n)  (n = length of input string)
// Space Complexity: O(n)  (for dp array)
class Solution {
public:
    int numDecodings(string s) {
        int n=s.size();
        if(n==1&&s[0]!='0') return 1;
        if(n==2 && s[0]=='0'||s[0]=='0') return 0;
        vector<int>dp(n+1,0);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            int one=s[i-1]-'0';
            int tens=stoi(s.substr(i-2,2));
            if(one>=1) dp[i]+=dp[i-1];
            if(tens>=10 && tens<=26) dp[i]+=dp[i-2];
        }
        return dp[n];
    }
};
