import itertools
class Solution:
    def countBinarySubstrings(self, s: str) -> int:
        groups = [len(list(v)) for _, v in itertools.groupby(s)]
        total = 0
        for i in range(1, len(groups)):
            total += min(groups[i-1], groups[i])
        return total

# Test
print(Solution().countBinarySubstrings("110001111000000"))