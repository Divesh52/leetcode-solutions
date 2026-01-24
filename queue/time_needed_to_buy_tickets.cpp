// Problem 2073: Time Needed to Buy Tickets
// Approach: Observation-based counting
//           Each person contributes to the total time based on how many
//           times they can buy tickets before person k finishes.
//           - For indices <= k: they can buy at most tickets[k] times
//           - For indices > k: they can buy at most tickets[k] - 1 times
// Time Complexity: O(n)
// Space Complexity: O(1)


class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int t=0;
        for(int i=0;i<tickets.size();i++)
        {
            if(i<=k) t+=min(tickets[i],tickets[k]);
            else t+=min(tickets[i],tickets[k]-1);
        }
        return t;
    }
};
