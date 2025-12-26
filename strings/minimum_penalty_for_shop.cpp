// Problem: Minimum Penalty for a Shop
// Approach: Greedy
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int bestClosingTime(string customers) {
        int s=0;
        for(auto i:customers){
            if(i=='Y') s++;
        }
        int m=s,h=0;
        for(int i=0;i<customers.size();i++){
            if(customers[i]=='Y') s--;
            else s++;
            if(s<m){
                s=m;
                h=i+1;
            }
        }
        return h;
    }
};
