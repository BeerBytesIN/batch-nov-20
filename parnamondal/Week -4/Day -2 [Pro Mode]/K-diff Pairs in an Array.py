# Time Complexity - 0(N)
# Space Complexity - O(N)

class Solution:
    def findPairs(self, nu: List[int], k: int) -> int:
        d={}
        j=0
        for x in nu:
            if x not in d:
                d[x]=1
            else:
                d[x]+=1
        if k:
            s=sum(x+k in d for x in d.keys())
        if k==0:
            s=sum(k>1 for k in d.values())
        return s
                