// Problem 1984: Minimum Difference Between Highest and Lowest of K Scores
// Approach: Sorting + Sliding Window
//           Sort the array, then check every window of size k.
//           The minimum difference between nums[i+k-1] and nums[i] is the answer.
// Time Complexity: O(n log n)
// Space Complexity: O(1) (ignoring sort space)


class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(nums.size()==1) return 0;
        int mini=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i+k-1<nums.size();i++)
        {
            mini=min(mini,nums[i+k-1]-nums[i]);
        }
        return mini;
    }
};
