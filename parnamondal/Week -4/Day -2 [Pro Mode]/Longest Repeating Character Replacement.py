# Time Complexity - O(N)
# Space Complexity - O(1)

class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        co=[0]*26
        ans,curr,left,size,count=0,0,0,0,0
        for right in range(len(s)):
            co[ord(s[right])-65]+=1 
            size=right-left+1
            count=max(count,co[ord(s[right])-65])
            curr=size-count
            if curr>k:
                co[ord(s[left])-65]-=1
                left+=1
            else:
                ans=max(ans,size)
        return ans
        