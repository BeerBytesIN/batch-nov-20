# Time Complexity - O(N)
# Space Complexity - O(1)

class Solution:
    def longestValidParentheses(self, s: str) -> int:
        if len(s)==0 or len(s)==1:
            return 0
        #return count    
        left,right,m=0,0,0
        for i in range (len(s)):
            if s[i]=='(':
                left+=1
            else:
                right+=1
            if left==right:
                m=max(m,2*right)
            elif (right>=left):
                left,right=0,0
        left,right=0,0
        for i in range (len(s)-1,-1,-1):
            if s[i]=='(':
                left+=1 
            else:
                right+=1 
            if left==right:
                m=max(m,2*left)
            elif (left>=right):
                left,right=0,0
        return m            
        
            
        