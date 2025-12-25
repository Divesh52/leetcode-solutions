// Problem 42: Trapping Rain Water
// Approach: Dynamic Programming / Precompute Left & Right Max
// Time Complexity: O(n)  (n = number of bars)
// Space Complexity: O(n)  (for left and right max arrays)
class Solution {
public:
    int trap(vector<int>& num) {
        int t=0,n=num.size();
        vector<int>p(n),s(n);
        p[0]=num[0];
        s[n-1]=num[n-1];
        for(int i=1;i<n;i++)
        {
            p[i]=max(p[i-1],num[i]);
        }
        for(int i=n-2;i>=1;i--)
        {
            s[i]=max(s[i+1],num[i]);
        }
        for(int i=0;i<n;i++)
        {
            int lm=p[i],rm=s[i];
            if(num[i]<lm && num[i]<rm)
            {
                t+=min(lm,rm)-num[i];
            }
        }
        return t;
    }
};
