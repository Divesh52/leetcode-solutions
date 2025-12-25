// Problem: Search in Sorted Array
// Approach: Binary Search
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;

        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) left = mid + 1;
            else right = mid - 1;
        }

        return -1;
    }
};
// Problem: Search in Sorted Array
// Approach: Binary Search
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target) return i;
        }
        return -1;
    }
};
