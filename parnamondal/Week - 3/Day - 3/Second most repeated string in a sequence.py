
# Time Complexity- O(N)
# Space Complexity - O(N)

class Solution:
    def secFrequent(self, a, n):
        # code here
        c=[]
        for e in a:
            c.append(a.count(e))
        
        d = list(c)
        d.sort(reverse=True)
        
        for i in range(1,len(d)):
            if d[i] == d[i-1]:
                continue
            else:
                smaxe = d[i]
                break
        
        for i in range(len(c)):
            if c[i] == smaxe:
                return a[i]
    
