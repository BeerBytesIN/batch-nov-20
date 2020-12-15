class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        l = 0
        r = len(nums) - 1
        start = -1
        end = -1
        if len(nums) == 1 and nums[0] == target:
                return [0, 0]

        while(l <= r):
            mid = (l + r) // 2
            if nums[mid] > target:
                r = mid - 1
            elif nums[mid] < target:
                l = mid + 1
            else:
                start = mid
                end = mid
                while(nums[end] == target):
                    if end == len(nums) - 1:
                        end += 1
                        break
                    end += 1
                while(nums[start - 1] == target) and start != 0:
                    start -= 1
                return [start, end - 1]
            
        return [-1, -1]        
