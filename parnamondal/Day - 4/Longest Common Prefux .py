# Time Complexity - O(N)
# Space Complexity - O(1)

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        res=""
        n=float('inf')
        word=""
        l=len(strs)
        if l==0:
            return res
        for i in strs:
            if len(i)==0:
                return res
            if n>len(i):
                n=len(i)
                word=i
        print (word)
        for i in range (n):
            c=0
            for j in range (l):
                if word[i]==strs[j][i]:
                    c+=1
            if c==l:
                res+=word[i]
            else:
                return res
        return res
                