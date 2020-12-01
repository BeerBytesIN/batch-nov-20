# Time Complexity - O(K^2 * N)  where k-> prefix , greedy approach
# Space Complexity - O((K+N)^2)

class Solution:
    def palindromePairs(self, wo: List[str]) -> List[List[int]]:
        n=len(wo)
        res=set()
        d={}
        for i in range(n):
            d[wo[i][::-1]]=i
        for i,word in enumerate (wo):
            for j in range (0,len(word)+1):
                pre,pmain=word[:j],word[j:]
                if pre in d and pmain==pmain[::-1] and d[pre]!=i:
                    res.add((i,d[pre]))
            for j in range (len(word),-1,-1):
                suf,sumain=word[j:],word[:j]
                if suf in d and sumain==sumain[::-1] and d[suf]!=i:
                    res.add((d[suf],i))
        return res
        