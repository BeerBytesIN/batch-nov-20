from collections import deque
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s)<=1: return len(s)
        dq = deque(s[0])
        ds = set(dq)
        maxL = 1
        for i in range(1, len(s)):
            if s[i] not in dq:
                dq.append(s[i])
                ds.add(s[i])
            else:
                maxL = max(maxL, len(dq))
                while s[i]!=dq.popleft():
                    pass
                dq.append(s[i])
                ds = set(dq)
        maxL = max(maxL, len(dq))
        return maxL

# Test
print(Solution().lengthOfLongestSubstring("abcabcbb"))