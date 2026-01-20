// Problem 739: Daily Temperatures
// Approach: Monotonic Decreasing Stack (indices)
// Idea:
// - Maintain a stack of indices with decreasing temperatures
// - When a warmer temperature is found, pop indices until the stack is valid
// - For each popped index, the current index gives the waiting days
//
// Time Complexity: O(n)
// Space Complexity: O(n)


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans(temperatures.size());
        stack<int>st;
        for(int i=0;i<temperatures.size();i++)
        {
            while(!st.empty() && temperatures[i]>temperatures[st.top()])
            {
                int t=st.top();
                st.pop();
                ans[t]=i-t;
            }
            st.push(i);
        }
        return ans;
    }
};
