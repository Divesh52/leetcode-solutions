// Problem 1877: Minimize Maximum Pair Sum in Array
// Approach: Greedy + Two Pointers
//           Sort the array, then pair the smallest element with the largest.
//           This balances pairs and minimizes the maximum pair sum.
// Time Complexity: O(n log n)
// Space Complexity: O(1) (ignoring sort space)


class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=INT_MIN;
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            ans=max(ans,nums[l]+nums[r]);
            l++;
            r--;
        }
        return ans;
    }
};
