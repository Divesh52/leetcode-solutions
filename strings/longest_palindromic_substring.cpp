// Problem 5: Longest Palindromic Substring
// Approach: Brute Force 
// Time Complexity: O(n^3)  
// Space Complexity: O(1) 

class Solution {
public:
        bool pal(const string &s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

        string longestPalindrome(string s) {
            string ans="";
            if(s.size()==1) return s;
            for(int i=0;i<s.size();i++)
            {
                for(int j=1;j<=s.size()-i;j++)
                    {
                        int start = i;
                        int end = i + j - 1;

                        if (pal(s, start, end) && j > ans.size()) {
                            ans = s.substr(start, j);
                    }
                    }
            }
            return ans;
        }
    };
