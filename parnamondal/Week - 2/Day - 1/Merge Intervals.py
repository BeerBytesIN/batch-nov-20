# Time Complexity - O(nlogn)
# Space Complexity - O(n)

class Solution:
    def merge(self, inte: List[List[int]]) -> List[List[int]]:
        n=len(inte)
        if n<=1: 
            return inte
        inte.sort(key= lambda x:x[0])
        end = inte[0][1]
        ct=inte[0][0]
        ans=[]
        #print (inte[-1])
        for i in range(1,n):
            if end >=inte[i][0]:
                end=max(inte[i][1],end)
            else:
                ans.append([ct,end])
                ct=inte[i][0]
                end=inte[i][1]
        if end>=ct:
            ans.append([ct,end])
        
        return ans
        
        