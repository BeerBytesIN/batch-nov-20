from typing import List


class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        def check(i):
            c = strs[0][i]
            for s in strs[1:]:
                if s[i]!=c:
                    return True
            return False
        for i in strs:
            if i == "": return ""
        if len(strs)==0:
            return ""
        elif len(strs)==1:
            return strs[0]
        p = 0
        while True:
            try:
                if check(p):
                    return strs[0][:p]
                else:
                    p += 1
            except:
                return strs[0][:p]
        
# Test
print(Solution().longestCommonPrefix(["flower","flow","flight"]))