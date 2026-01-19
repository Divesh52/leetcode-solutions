// Problem 636: Exclusive Time of Functions
// Approach: Stack
// Time Complexity: O(n)
// Space Complexity: O(n)


class Solution {
public:
    tuple<int,int,string> fun(string &s)
    {
        int i=0;
        int fid=0,tsmp=0;
        string st="";
        while(i<s.size() && s[i]!=':')
        {
            fid=fid*10+(s[i]-'0');
            i++;
        }
        i++;
        while(i<s.size() && s[i]!=':')
        {
            st+=s[i];
            i++;
        }
        i++;
        while(i<s.size())
        {
            tsmp=tsmp*10+(s[i]-'0');
            i++;
        }
        return {fid,tsmp,st};
    }
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        stack<int>st;
        vector<int>ans(n,0);
        int prevTime=0;
        for(auto i:logs)
        {
            auto [fid,tsmp,state]=fun(i);
            if(state=="start")
            {
                if(!st.empty())
                {
                    ans[st.top()]+=tsmp-prevTime;
                }
                st.push(fid);
                prevTime=tsmp;
            }
            else
            {
                ans[st.top()]+=tsmp-prevTime+1;
                st.pop();
                prevTime=tsmp+1;
            }
        }
        return ans;
    }
};
