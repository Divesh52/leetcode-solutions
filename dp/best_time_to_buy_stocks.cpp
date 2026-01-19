// Problem 121: Best Time to Buy and Sell Stock
// Approach: Greedy
// Time Complexity: O(n)
// Space Complexity: O(1)


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int f=INT_MAX;
        for(int i:prices)
        {
            ans=max(ans,i-f);
            f=min(f,i);
        }
        return ans;
    }
};
