# Time Complexity - O(log MN)
# Space Complexity - O(1)

class Solution:
    def searchMatrix(self, mat: List[List[int]], target: int) -> bool:
        if len(mat)==0:
            return False
        m=len(mat)
        n=len(mat[0])
        l=0
        h=m*n-1
        while (l<=h):
            mid=l+ (h-l) //2
            if mat[mid//n][mid%n]==target:
                return True
            elif mat[mid//n][mid%n]>target:
                h=mid-1
            else:
                l=mid+1
        return False
                
        