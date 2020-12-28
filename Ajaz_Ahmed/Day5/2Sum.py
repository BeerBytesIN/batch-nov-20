class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dic = dict()
        for i, ele in enumerate(nums):
            if (target - ele) in dic:
                return [dic[target - ele],i]
            else:
                dic[ele] = i
                    
        
