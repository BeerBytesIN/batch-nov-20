# Time Complexity - 0(32N)
# Space Complexity - O(N)

class Solution:
    def xorQueries(self, arr: List[int], qu: List[List[int]]) -> List[int]:
        n=len(arr)
        xorarr=[arr[0]]
        xor=arr[0]
        for i in arr[1:]:
            xor^=i 
            xorarr.append(xor)
        ans=[]
        for i in qu:
            l,r=i
            if l==r:
                ans.append(arr[l])
            elif l==0:
                ans.append(xorarr[r])
            else:
                ans.append(xorarr[r]^xorarr[l-1])
        return ans
                