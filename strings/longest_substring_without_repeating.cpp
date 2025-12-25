// Problem 3: Longest Substring Without Repeating Characters
// Approach: Brute Force
// Time Complexity: O(n^2)
// Space Complexity: O(n)
class Solution {
public:
    bool f(const string& str) {
    unordered_set<char> chars;
    for (char c : str) {
        if (chars.count(c)) return false;
        chars.insert(c);
    }
    return true;
}
    int lengthOfLongestSubstring(string s) {
        if(s=="") return 0;
        if (s == "") return 0;
        int m = 0;

        for (int i = 0; i < s.size(); i++) {
            unordered_set<char> c;
            for (int j = i; j < s.size(); j++) {
                if (c.count(s[j])) break;
                c.insert(s[j]);
                m = max(m, j - i + 1);
            }
        }

        return m;
    }
};
