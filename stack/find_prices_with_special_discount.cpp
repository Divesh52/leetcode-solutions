// Problem 1475: Final Prices With a Special Discount in a Shop
// Approach: Brute Force
// Time Complexity: O(n^2)
// Space Complexity: O(1) 


class Solution {
public:
    int fun(vector<int>&prices,int i)
    {
        for(int j=i+1;j<prices.size();j++)
        {
            if(prices[j]<=prices[i]) return prices[j];
        }
        return 0;
    }
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>ans;
        for(int i=0;i<prices.size();i++)
        {
            int k=fun(prices,i);
            ans.push_back(prices[i]-k);
        }
        return ans;
    }
};
