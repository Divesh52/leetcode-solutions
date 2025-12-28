// Problem: 3788 Maximum Score of a Split
// Approach: Prefix Sum + Suffix Minimum
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long>pref(n),suf(n);
        pref[0]=nums[0];
        for(int i=1;i<n;i++)
            {
                pref[i]=pref[i-1]+nums[i];
            }

        suf[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
            {
                suf[i]=min(suf[i+1],1LL*nums[i]);
            }
        long long ans=LLONG_MIN;
        for(int i=0;i<n-1;i++)
            {
                ans=max(ans,pref[i]-suf[i+1]);
            }
        return ans;
    }
};
