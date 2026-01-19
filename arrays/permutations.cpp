// Problem 46: Permutations
// Approach: Backtracking
// Time Complexity: O(n · n!)
// Space Complexity: O(n)


class Solution {
public:
    void per(vector<vector<int>>&ans,vector<int>&nums,int l)
    {
        if(l==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=l;i<nums.size();i++)
        {
            swap(nums[l],nums[i]);
            per(ans,nums,l+1);
            swap(nums[l],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        per(ans,nums,0);
        return ans;
    }
};
