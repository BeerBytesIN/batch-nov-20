# Time Complexity- O(N).
# Space Complexity - O(N)

class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        dp = {}
        
        def word_break(s):
            if s == "": return True
            if s in dp: return dp[s]
            for word in wordDict:
                if word == s[:len(word)] and word_break(s[len(word):]):
                    dp[s] = True
                    return True
                dp[s] = False
            return False
        
        return word_break(s)