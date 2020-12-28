# Time Complexity - O(N)
# Space Complexity - O(N)

class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        n=len(s)
        stack=[]
        for i in range (n):
            f=0
            if s[i]=='(':
                stack.append(s[i])
            else:
                if stack:
                    t=stack[-1]
                    if t=='(':
                        f=1
                        stack.pop()
                if f==0:
                    stack.append(s[i])
        return len(stack)
                        
                    
        