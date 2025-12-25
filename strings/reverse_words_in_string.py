# Problem 151: Reverse Words in a String
# Approach: Split and Join / List Reversal
# Time Complexity: O(n)  
# Space Complexity: O(n)

class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        a=s.split()
        b=a[::-1]
        str1 = " "
        aa=' '.join(b)
        return aa
