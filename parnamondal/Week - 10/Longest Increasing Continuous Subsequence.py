# Time Complexity - O(N)
# Space Complexity - O(1)

class Solution:
    def findLengthOfLCIS(self, nums: List[int]) -> int:
        if not nums:
            return 0
        n=len(nums)
        ans=anch=0
        for i in range (n):
            if i and nums[i-1]>=nums[i]:
                anch=i
            ans=max(ans,i-anch+1)
        return ans
        '''dp=[nums[0]]
        ma=float('-inf')
        for i in range (1,n):
            frame,f=nums[i],0
            for j in range (len(dp)):
                if dp[j]<frame:
                    f+=1
            if f==len(dp) :
                dp.append(frame)
            else:
                ma=max(ma,len(dp))
                dp=[]
                dp.append(frame)
        return max(ma,len(dp))'''
                