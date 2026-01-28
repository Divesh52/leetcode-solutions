// Problem 658: Find K Closest Elements
// Approach: Distance Mapping + Sorting
//           Compute absolute distance of each element from x,
//           sort by distance,
//           pick first k elements and sort them.
// Time Complexity: O(n log n)
// Space Complexity: O(n)


class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        if(arr.size()==1) return arr;
        vector<int>ans;
        vector<pair<int,int>>dp;
        for(int i=0;i<arr.size();i++)
        {
            dp.push_back({abs(arr[i]-x),i});
        }
        sort(dp.begin(),dp.end(), [] (pair<int,int>&a ,pair<int,int>&b ){
            if(a.first==b.first) return a.second<b.second;
        return a.first<b.first;
        });
        for(int i=0;i<k;i++)
        {
            ans.push_back(arr[dp[i].second]);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
