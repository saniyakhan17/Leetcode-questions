class Solution(object):
    def partitionString(self, s):
        sub=set()
        temp=1
        for c in s:
            if c in sub:
                temp+=1
                sub=set()
            sub.add(c)
        return temp
        """
        :type s: str
        :rtype: int
        """
