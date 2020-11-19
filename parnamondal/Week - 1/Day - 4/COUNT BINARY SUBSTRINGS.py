# Time Complexity - O(N)
# Space Complexity - O(N)

import itertools
class Solution:
    def countBinarySubstrings(self, s: str) -> int:
        n=len(s)
        if n<=1: 
            return 0
        if n==2:
            if s=="01" or s=="10":
                return 1
            else:
                return 0
        c=0
        a=[ len(list(g)) for c,g in itertools.groupby(s)]
        for i in range (len(a)-1):
            c+=min(a[i],a[i+1])
        return c
            