class Solution(object):
#hash_map
    def romanToInt(self, s):
        ref={"I": 1, "V": 5, "X":10, "L":50, "C": 100, "D": 500, "M":1000}
        ans = 0
        l=len(s)
        for i in range(l):
            if i+1<l and ref[s[i]]<ref[s[i+1]]:
                ans=ans-ref[s[i]]
            else:
                ans=ans+ref[s[i]]
        return ans

        """
        :type s: str
        :rtype: int
        """
