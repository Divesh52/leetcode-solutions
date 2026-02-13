// Problem 209: Minimum Size Subarray Sum
// Approach: Sliding Window (Two Pointers)
//           Expand the right pointer to increase sum.
//           When sum ≥ target, shrink from the left
//           to minimize the window length.
// Time Complexity: O(n)
// Space Complexity: O(1)


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        int n=nums.size();
        int i=0;
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=nums[j];
            while(sum>=target)
            {
                ans=min(ans,j-i+1);
                sum-=nums[i];
                i++;
            }
        }
        return ans ==INT_MAX ?0 :ans;
    }
};
