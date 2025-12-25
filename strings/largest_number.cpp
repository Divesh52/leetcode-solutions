// Problem 179: Largest Number
// Approach: Custom Sorting / Greedy
// Time Complexity: O(n log n)  
// Space Complexity: O(n) 

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string ans;
        ranges::sort(nums, [](int a, int b)
        { 
            return to_string(a)+to_string(b)>to_string(b)+to_string(a);
    });
        for(int i:nums)
        {
            ans+=to_string(i);
        }
        return ans[0]=='0'?"0":ans;
    }
};
