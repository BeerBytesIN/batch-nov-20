def findDuplicate(self, nums: List[int]) -> int:
    for i in range(len(nums)):
        tmp = abs(nums[i])
        if nums[tmp - 1] < 0:
            return tmp
        else:
            nums[tmp - 1] *= -1