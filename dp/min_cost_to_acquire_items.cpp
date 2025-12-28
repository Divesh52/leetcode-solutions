// Problem: 3789 Minimum Cost to Acquire Required Items
// Approach: Greedy Cost Comparison
// Time Complexity: O(1)
// Space Complexity: O(1)


class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long ans=0;
        if(costBoth<=min(cost1,cost2))
        {
            return 1LL*costBoth*max(need1,need2);
        }
        if(costBoth<cost1+cost2)
        {        
            int maxi=min(need1,need2);
            ans+=1LL*costBoth*maxi;
            need1-=maxi;
            need2-=maxi;
        }
        ans+=1LL*min(cost1,costBoth)*need1;
        ans+=1LL*min(cost2,costBoth)*need2;
        return ans;
    }
};
