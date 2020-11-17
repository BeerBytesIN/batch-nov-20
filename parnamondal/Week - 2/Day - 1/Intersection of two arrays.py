# Time Complexity - O(min(nums1,nums2))
# Space Complexity - O(min(nums1,nums2))


class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        a,b=len(nums1),len(nums2)
        if a==0 or b==0 :
            return []
        sm=a if a<b else b
        r=nums1 if sm==a else nums2  # smaller
        r1=nums1 if sm!=a else nums2  # larger array 
        
        n=[]
        for i in range (sm):
            if r[i] in r1:
                ind=r1.index(r[i])
                n.append(r[i])
                r1.remove(r1[ind])
        return n
        
        