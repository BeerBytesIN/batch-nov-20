# Time Complexity - O(s+words)
# Space Complexity - O(s+words)

class Solution:
    def findSubstring(self, s: str, wo: List[str]) -> List[int]:
        res,d,part=[],{},len(wo[0])
        n1,n2=len(s),len(wo)
        ok=0
        for i in wo:
            ok+=len(i)
            if i not in d:
                d[i]=1
            else:
                d[i]+=1
        for i in range (n1-ok+1):
            sd=s[i:i+ok]
            m2,f={},0
            for j in range(0,len(sd),part):
                if (sd[j:j+part] in m2 ):
                    m2[sd[j:j+part]]+=1
                else:
                    m2[sd[j:j+part]]=1
            if m2==d:
                res.append(i)
        return res
                
            
                
                
                
            
        
        
        