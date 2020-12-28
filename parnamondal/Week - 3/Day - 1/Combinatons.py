# Time Complexity - 0(N*N!)
# Space Complexity - O(k) considering each one

from itertools import combinations
class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        out=[]
        a=list(range(1,n+1))
        def back(st,a,comb):
            if len(comb)==k:
                out.append(list(comb))
                return
            for i in range (st,len(a)):
                comb.append(a[i])
                back(i+1,a,comb)
                comb.pop()
        back(0,a,[])
        
        '''for i in combinations(a,k):
            out.append(list(i))'''
        return out
        
        
        