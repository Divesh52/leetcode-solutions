// Problem 84: Largest Rectangle in Histogram
// Approach: Monotonic increasing stack to determine the widest span
// where each bar is the minimum height.
// When a smaller bar appears, resolve rectangles ending at the previous bars.
// Time Complexity: O(n)
// Space Complexity: O(n)


class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int ans=0;
        for(int i=0;i<heights.size();i++)
        {
            while(!st.empty()&&heights[st.top()]>heights[i])
            {
                int h=heights[st.top()];
                st.pop();
                int r;
                if(st.empty()) r=i;
                else r=i-st.top()-1;
                ans=max(ans,h*r);
            }
            st.push(i);
        }
        while(!st.empty())
        {
            int h=heights[st.top()];
            st.pop();
            int r;
            if(st.empty()) r=heights.size();
            else r=heights.size()-st.top()-1;
            ans=max(ans,h*r);
        }
        return ans;
    }
};
