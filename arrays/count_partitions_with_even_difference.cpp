// Problem: Count Partitions with Even Difference
// Platform: Custom / LeetCode-style
// Approach: Greedy + Prefix Sum Tracking
// Time Complexity: O(n)
// Space Complexity: O(1) 

class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        for(int i:nums) s+=i;
        int cnt=0;
        int l=0,r=0;
        for(int i=0;i<n-1;i++){
            l+=nums[i];
            r=s-l;
            if((l-r)%2==0) cnt++;
        }
        return cnt;
    }
};
