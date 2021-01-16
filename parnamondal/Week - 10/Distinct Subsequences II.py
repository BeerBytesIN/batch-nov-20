# Time Complexity - O(N)
# Space Complexity - O(1)

class Solution:
    def distinctSubseqII(self, s: str) -> int:
        letter=[0]*26
        pre=cur=1   # including empty string
        m=10**9 +7
        for i in range (len(s)):
            ch=ord(s[i])-ord('a')
            cur=(pre*2)%m
            cur-=letter[ch]
            cur=cur%m if cur>=0 else cur+m
            letter[ch]=pre
            pre=cur
        return cur-1  # remove the count of the empty string