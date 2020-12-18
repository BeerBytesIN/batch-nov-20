# Time Complexity - 0(N*N!)
# Space Complexity - O(N)

from itertools import permutations
class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        n=len(nums)
        count={}
        out=[]
        for i in nums:
            if i not in count:
                count[i]=1
            else:
                count[i]+=1
        def calc(comb,count):
            if n==len(comb):
                out.append(list(comb))
                return
            for num in count:
                if count[num]>0:
                    comb.append(num)
                    count[num]-=1
                    calc(comb,count)
                    comb.pop()
                    count[num]+=1 
        calc([],count)
        return out
        '''nums.sort()
        out=[]
        for i in  permutations(nums):
            if list(i) not in out:
                out.append(list(i))
        return out'''
        
        