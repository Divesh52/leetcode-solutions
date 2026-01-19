// Problem 49: Group Anagrams
// Approach: Hash Map + Sorting
// Time Complexity: O(n * k log k)
// Space Complexity: O(n * k)


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
        vector<vector<string>>ans;
        for(auto i:strs){
            string a=i;
            ranges::sort(a);
            m[a].push_back(i);
        }
        for(const auto&[_,i]:m)
        {
            ans.push_back(i);
        }
        return ans;

    }
};
