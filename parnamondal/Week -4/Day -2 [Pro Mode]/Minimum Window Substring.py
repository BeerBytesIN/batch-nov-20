# Time Complexity - O(N+S)
# Space Complexity - O(N+S)

class Solution:
    def minWindow(self, s: str, t: str) -> str:
        n1,n2=len(s),len(t)
        if not s or not t:
            return ""
        left,right=0,0
        m1=Counter(t)
        m2={}
        
        reqd=len(m1)
        form=0
        ans=float('inf'),None,None
        while (right<n1):
            ch=s[right]
            if ch in m2:
                m2[ch]+=1
            else:
                m2[ch]=1
            if ch in m1 and m2[ch]==m1[ch]:
                form+=1
            while left<=right and form==reqd:
                ch=s[left]
                if right-left+1<ans[0]:
                    ans=(right-left+1,left,right)
                m2[ch]-=1
                if ch in m1 and m2[ch]<m1[ch]:
                    form-=1
                left+=1
            right+=1
        return "" if ans[0]==float("inf") else s[ans[1]:ans[2]+1]
                
                    