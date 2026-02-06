// Problem 1190: Reverse Substrings Between Each Pair of Parentheses
// Approach: Stack-based Simulation
//           Traverse the string character by character.
//           Push characters onto a stack until a closing parenthesis is found.
//           On ')', pop characters until '(' is encountered, reverse that segment,
//           and push it back onto the stack.
//           Finally, build the result from the stack.
// Time Complexity: O(n²) in worst case (due to repeated reversals)
// Space Complexity: O(n)


class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        for(auto i:s)
        {
            if(i=='(') st.push(i);
            if(isalpha(i)) st.push(i);
            if(i==')')
            {
                string tmp="";
                while(st.top()!='(')
                {
                    tmp+=st.top();
                    st.pop();
                }
                st.pop();
            for(auto i:tmp) st.push(i);
            }
        }
        string ans="";
        while(!st.empty())
        {
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};
