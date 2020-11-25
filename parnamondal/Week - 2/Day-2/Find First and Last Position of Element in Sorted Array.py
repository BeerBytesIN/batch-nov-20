# Time Complexity - O(1)
# Space Complexity - O(1)

class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        n=len(nums)
        if target not in nums:
            return [-1,-1]
        ind=nums.index(target)

        co=nums.count(target)
        return [ind,ind+co-1]
        '''l,h=0,n-1
        while (l<=h):
            mid=l+(h-l)//2
            if nums[mid]==target:
                print(mid)
                break
            elif nums[mid]>target:
                h=mid-1
            else:
                l=mid+1'''
        