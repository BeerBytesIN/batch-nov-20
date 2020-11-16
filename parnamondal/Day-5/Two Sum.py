# Time Complexity - O(N)
# Space Complexity - O(N)

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        ma={}
        for i in range(len(nums)):
            ma[nums[i]]=i
            '''if nums[i] not in ma:
                ma[nums[i]]=[i]
            else:
                ma[nums[i]].append(i)'''
        for i in range(len(nums)):
            ok=target -nums[i]
            if ok in ma and ma[ok]!=i:
                return [i,ma[ok]]
                
                