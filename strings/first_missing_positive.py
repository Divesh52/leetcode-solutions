# Problem 41: First Missing Positive
# Approach: In-place Rearrangement
# Time Complexity: O(n)
# Space Complexity: O(1)

class Solution(object):
    def firstMissingPositive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        def swap(arr, i, j):
            arr[i], arr[j] = arr[j], arr[i]
        
        n = len(nums)
        for i in range(n):
            while 0 < nums[i] <= n and nums[i] != nums[nums[i] - 1]:
                swap(nums, i, nums[i] - 1)
        for i in range(n):
            if nums[i] != i + 1:
                return i + 1
        return n + 1
            
