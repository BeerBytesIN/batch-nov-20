from typing import List


class Solution:
    def palindromePairs(self, words: List[str]) -> List[List[int]]:
        stringSet = {}
        for i, string in enumerate(words):
            stringSet[string] = i
        res = set()
        for i, string in enumerate(words):
            if string == "":
                for k in range(len(words)):
                    if k != i and words[k] == words[k][::-1]:
                        res.add((k, i))
                        res.add((i, k))
                continue
            for j in range(len(string)):
                s = string[:j]
                s = s[::-1]
                if s in stringSet and s != string:
                    if string+s == (string+s)[::-1]:
                        res.add((i, stringSet[s]))
            for j in range(len(string)):
                s = string[j:]
                s = s[::-1]
                if s in stringSet and s != string:
                    if s+string == (s+string)[::-1]:
                        res.add((stringSet[s], i))
        return res


# Test
print(Solution().palindromePairs(["abcd", "dcba", "lls", "s", "sssll"]))
print(Solution().palindromePairs(["a", "", "b"]))
