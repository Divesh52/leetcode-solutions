// Problem 11: Container With Most Water
// Approach: Two Pointers / Greedy
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int ans=0;
        while(i<j)
        {
            int p=(j-i)*min(height[i],height[j]);
            ans=max(ans,p);
            if(height[i]<height[j]) i++;
            else j--;
        }
        return ans;
    }
};
