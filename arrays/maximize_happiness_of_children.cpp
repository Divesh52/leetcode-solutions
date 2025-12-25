// Problem 3075: Maximize Happiness of Selected Children
// Approach: Greedy
// Time Complexity: O(n log n)  
// Space Complexity: O(1)

class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end(),greater<int>());
        long long s=0;
        for(int i=0;i<k && i<happiness.size();i++)
        {
            int v=happiness[i]-i;
            if(v<=0) break;
            s+=v;
        }
        return s;
    }
};
