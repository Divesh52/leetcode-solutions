// Problem 8: String to Integer (atoi)
// Approach: String parsing with sign handling
// Time Complexity: O(n) 
// Space Complexity: O(1)

class Solution {
public:
    int myAtoi(string s) {
        long long ans = 0;
        int n1 = s.size();
        int i = 0;
        bool n = false;
        while (i < n1 && s[i] == ' ') {
            i++;
        }
        if (i < n1 && s[i] == '-') {
            n = true;
            i++;
        } else if (i < n1 && s[i] == '+') {
            i++;
        }
        while (i < n1 && isdigit(s[i])) {
            ans = ans * 10 + (s[i] - '0');
            i++;
            if (ans > INT_MAX) {
            if (n) {
                return INT_MIN; 
            } else {
                return INT_MAX;
            }
        }
        }
        if (n) {
            ans = -ans;
        }
        return ans;
    }
};
