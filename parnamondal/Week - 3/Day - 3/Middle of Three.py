# Time Complexity- O(1)
# Space Complexity - O(1)

class Solution:
    def middle(self,a,b,c):
        #code here
        mi,ma=min(a,b,c),max(a,b,c)
        if a!=mi and a!=ma:
            return a
        if b!=mi and b!=ma:
            return b
        if c!=mi and c!=ma:
            return c

