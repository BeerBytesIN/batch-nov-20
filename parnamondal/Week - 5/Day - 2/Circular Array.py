# Time Complexity- O(N*N).
# Space Complexity - O(N)

class Solution:
    def circularArrayLoop(self, nums: List[int]) -> bool:
        n=len(nums)
        def findp(nums,index,foe):
            dirn=True if nums[index]>=0 else False
            if dirn!=foe:
                return -1
            tr=(index+nums[index])%n
            if tr<0:
                tr+=n
            if tr==index:
                return -1
            return tr
            
        for i in range (n):
            slow,fast=i,i
            foe=True if nums[i]>0 else False
            while (True):
                slow=findp(nums,slow,foe)
                if slow==-1:
                    break
                fast=findp(nums,fast,foe)
                if fast == -1:
                    break
                fast=findp(nums,fast,foe)
                if fast == -1:
                    break
                if slow==fast:
                    return True
        return False
        
        