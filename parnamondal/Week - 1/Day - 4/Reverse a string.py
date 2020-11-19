# Time Complexity - O(N)
# Space Complexity - O(1)

class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        if len(s)<=1:
            return s
        n=len(s)
        j=n-1
        for i in range (n//2):
            s[i],s[j]=s[j],s[i]
            j-=1
        return s