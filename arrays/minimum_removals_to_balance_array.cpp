// Problem 3366: Minimum Array Removals to Make Max - Min ≤ K
// Approach: Two Pointers + Sorting
//           Sort the array, then use a sliding window to find the
//           largest subarray where nums[j] ≤ nums[i] * k.
//           Elements outside this window must be removed.
// Time Complexity: O(n log n)
// Space Complexity: O(1) (ignoring sort space)


class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        if(nums.size()==1) return 0;
        ranges::sort(nums);
        int cnt=0;
        int i=0;
        int ans=nums.size();
        for(int j=0;j<nums.size();j++)
        {
            while((long long)nums[j]>(long long)nums[i]*k)
            {
                i++;
            }
            ans=min(ans,(int)nums.size()-(j-i+1));
        }
        return ans;
    }
};
