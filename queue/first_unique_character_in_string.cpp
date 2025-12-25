// Problem 387: First Unique Character in a String
// Approach: Queue + Frequency Array
// Time Complexity: O(n)  (n = length of string)
// Space Complexity: O(n)  (for queue + frequency array)
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> count(26, 0);
        queue<int> q;
        
        for (int i = 0; i < s.size(); i++) {
            count[s[i] - 'a']++;
            q.push(i);
        }
        
        while (!q.empty()) {
            int idx = q.front();
            if (count[s[idx] - 'a'] == 1) return idx;
            q.pop();
        }
        
        return -1;
    }
};
