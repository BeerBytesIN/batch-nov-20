from typing import List

from collections import Counter
class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        # if len(nums1) > len(nums2):
        #     nums2, nums1 = nums1, nums2
        c1 = Counter(nums1)
        c2 = Counter(nums2)
        res = []
        for key in c1:
            if key in c2:
                res.extend([key]*min(c1[key], c2[key]))
        return res

# Test
print(Solution().intersect(nums1 = [4,9,5], nums2 = [9,4,9,8,4]))
print(Solution().intersect(nums1 = [1,2,2,1], nums2 = [2,2]))