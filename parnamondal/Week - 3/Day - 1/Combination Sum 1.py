# Time Complexity - 0(N^target)
# Space Complexity - O(N) considering each one

class Solution:
    def combinationSum(self, can: List[int], tar: int) -> List[List[int]]:
        n=len(can)
        out=[]
        if tar<min(can):
            return out
        def calc(can,start,comb,tar):
            if tar<0:
                return
            if tar==0:
                out.append(list(comb))
            for i in range (start,n):
                comb.append(can[i])
                calc(can,i,comb,tar-can[i])
                comb.pop()
        
                
        calc(can,0,[],tar)
        return out
        