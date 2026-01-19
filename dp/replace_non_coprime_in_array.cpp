// Problem 2197: Replace Non-Coprime Numbers in Array
// Approach: Stack + GCD/LCM Merging
// Time Complexity: Amortized O(n * log(max(nums)))
// Space Complexity: O(n)


class Solution {
public:
    int gcdd(int a, int b)
    {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    int lcdd(int a,int b)
    {
        return (a/gcd(a,b))*b;
    }
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int>st;
        for(int i:nums)
        {
            while(!st.empty()&& gcdd(st.back(),i)>1)
            {
                i=lcdd(st.back(),i);
                st.pop_back();
            }
            st.push_back(i);
        }
        return st;
    }
};
