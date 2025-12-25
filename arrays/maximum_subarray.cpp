// Problem 53: Maximum Subarray
// Approach: Kadane's Algorithm / Greedy
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=0;
        int m=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(s<0) s=0;
            s+=nums[i];
            m=max(m,s);
        }
        return m;
    }
};
