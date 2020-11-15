# Time Complexity - O(n)
# Space Complexity -O(1)

class Solution:
    def findTwoElement( self,arr, n): 
        # code here
        for ele in range (1,n+1):
            if ele not in arr:
                missing=ele
                break

        
        for ele in range(n):
            if arr[abs(arr[ele])-1]>0:
                arr[abs(arr[ele])-1]=-arr[abs(arr[ele])-1]
            else:
                return abs(arr[ele]),missing