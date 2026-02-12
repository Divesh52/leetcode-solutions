// Problem: Longest Balanced Substring
// Approach: Brute Force + Frequency Map
//           For every starting index, expand the substring
//           and maintain a frequency map of characters.
//           A substring is valid if all characters appear
//           the same number of times.
// Time Complexity: O(n^3) worst case
// Space Complexity: O(n)


class Solution {
public:
    bool fun(unordered_map<char,int>&m)
    {
        if(m.empty()) return false;
        int c=m.begin()->second;
        for(auto i:m)
        {
            if(i.second!=c) return false;
        }
        return true;
    }
    int longestBalanced(string s) {
        int n=s.size();
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            unordered_map<char,int>m;
            for(int j=i;j<n;j++)
            {
                m[s[j]]++;
                if(fun(m))
                {
                    ans=max(ans,j-i+1);
                }
            }
        }
        return ans;
    }
};
