# Problem 65: Valid Number
# Approach: String Parsing 
# Time Complexity: O(n)
# Space Complexity: O(1)

class Solution:
    def isNumber(self, s: str) -> bool:
        dot=False
        num=False
        i=0
        if s[i] in ['+','-']:
            i+=1
        while i<len(s):
            a=s[i]
            if a.isalpha():
                if a not in ['e','E']:
                    return False
                else:
                    return num and self.fun(s[i+1:])
            elif a=='.':
                if dot:
                    return False
                else:
                    dot=True
            elif a in ['-','+']:
                return False
            else:
                if a.isdigit():
                    num=True
            i+=1
        return num
    def fun(self,test):
        if not test:
            return False
        i=0
        num=False
        if test[i] in ['-','+']:
            i+=1
        while i<len(test):
            cur=test[i]
            if cur.isdigit():
                num=True
            else:
                return False
            i+=1
        return num
