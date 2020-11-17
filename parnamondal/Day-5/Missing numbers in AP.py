# Time Complexity - O(1)
# Space Complexity - O(1)
import math

class Solution:
    def inSequence(self, A, B, C):
        # code here
        d=B-A
        if d==0:
            return 1
        if d<0:
            if C>=0:
                return 0
            if d%C==0:
                return 1
            return 0
        else:
            if C<=0:
                return 0
            if d%C==0:
                return 1
            return 0
        return 0
        