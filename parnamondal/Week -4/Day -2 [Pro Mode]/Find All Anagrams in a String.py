# Time Complexity - O(S+P)
# Space Complexity - O(P)

class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        if not s or not p or len(p)>len(s):
            return []
        #p=''.join(sorted(p)) 
        d,res={},[]
        for i in p:
            if i not in d:
                d[i]=1
            else:
                d[i]+=1
        #ok=''
        l,l1,d1=len(p),len(s),{}
        for i in range (l):
            if s[i] in d1:
                d1[s[i]]+=1
            else:
                d1[s[i]]=1
        #print (d1)
        for i in range (1,l1-l+1):
            if d1==d:
                res.append(i-1)
            if d1[s[i-1]]>1:
                d1[s[i-1]]-=1
            else:
                del d1[s[i-1]]
            if s[i+l-1] in d1:
                d1[s[i+l-1]]+=1
            else:
                d1[s[i+l-1]]=1
            #print (d1,"   ",i)
        if d==d1:
            res.append(i)
        return res
        