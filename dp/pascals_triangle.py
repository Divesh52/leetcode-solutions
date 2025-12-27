# Problem 118: Pascal's Triangle
# Approach: Simulation / Dynamic Programming
# Time Complexity: O(numRows²)
# Space Complexity: O(numRows²)


class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        ans=[[1]]
        for i in range(numRows-1):
            t=[0]+ans[-1]+[0]
            r=[]
            for j in range(len(ans[-1])+1):
                r.append(t[j]+t[j+1])
            ans.append(r)
        return ans

        
