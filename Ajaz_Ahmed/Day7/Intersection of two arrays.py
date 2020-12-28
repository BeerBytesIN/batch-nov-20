class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        inter = []
        if len(nums1) >= len(nums2):
            for i,ele in enumerate(nums2):
                if ele in nums1:
                    inter.append(ele)
                    nums1.remove(ele)
        else:
            for i,ele in enumerate(nums1):
                if ele in nums2:
                    inter.append(ele)
                    nums2.remove(ele)
                    
        return inter            
            
        
