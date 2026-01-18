// Problem 34: Find First and Last Position of Element in Sorted Array
// Approach: Linear Scan
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans,ans2(2);
        for(int i=0;i<nums.size();++i)
        {
            if (nums[i]==target)
            {
                ans.push_back(i);
            }
        }
        if(ans.size()==0) return {-1,-1};
        else if (ans.size()==1) return {ans[0],ans[0]};
        else
        {
            ans2[0]=ans[0];
            ans2[1]=ans[ans.size()-1];
        }
        return ans2;
    }
};
