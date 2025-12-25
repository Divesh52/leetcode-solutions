// Problem 17: Letter Combinations of a Phone Number
// Approach: Backtracking / Recursion
// Time Complexity: O(4^n * n)  (n = length of digits, 4 = max letters per digit)
// Space Complexity: O(n)  (recursion stack + output strings)
class Solution {
public:
    void myf(string digit,string out,int i,vector<string>&m,vector<string>&ans)
    {
        if(i>=digit.length()) 
        {
            ans.push_back(out);
            return;
        }
        int num=digit[i]-'0';
        string l=m[num];
        for(int j=0;j<l.length();j++)
        {
            out.push_back(l[j]);
            myf(digit,out,i+1,m,ans);
            out.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length()<1) return {};
        int i=0;
        string out="";
        vector<string>m={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        myf(digits,out,i,m,ans);
        return ans;
    }
};
