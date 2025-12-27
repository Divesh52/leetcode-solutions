// Problem 118: Pascal's Triangle
// Approach: Simulation / Dynamic Programming
// Time Complexity: O(numRows²)
// Space Complexity: O(numRows²)

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans={{1}};
        for(int i=0;i<numRows-1;i++)
        {
            vector<int>t,r,p=ans.back();
            t.push_back(0);
            t.insert(t.end(),p.begin(),p.end());
            t.push_back(0);
            for(int j=0;j<ans.back().size()+1;j++)
            {
                r.push_back(t[j]+t[j+1]);
            }
            ans.push_back(r);
        }
        return ans;
    }
};
