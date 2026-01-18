// Problem 26: Remove Duplicates from Sorted Array
// Approach: Hash Set + Auxiliary Array
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int>ans;
        vector<int>t;
        for(int i:nums)
        {
            if(ans.count(i))
            {
                continue;
            }
            else
            {
                ans.insert(i);
                t.push_back(i);
            }
        }
        nums=t;
        return ans.size();
    }
};
