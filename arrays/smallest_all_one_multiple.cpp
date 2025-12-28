// Problem: 3790 Smallest All-Ones Multiple
// Approach: Modular Arithmetic + Cycle Detection
// Time Complexity: O(k)
// Space Complexity: O(k)

class Solution {
public:
    
    int minAllOneMultiple(int k) {
        if(k%2==0) return -1;
        int n=1%k;
        int cnt=1;
        vector<bool>test(k,false);
        while(n!=0)
            {
                if(test[n]) return -1;
                test[n]=true;
                n=((n*10)+1)%k;
                cnt++;
            }
        return cnt;
    }
};
