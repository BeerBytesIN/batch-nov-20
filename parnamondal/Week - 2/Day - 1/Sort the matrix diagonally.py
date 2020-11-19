# Time Complexity - O(N)
# Space Complexity - O(N)


class Solution:
    def diagonalSort(self, mat: List[List[int]]) -> List[List[int]]:
        r=len(mat)
        c=len(mat[0])
        # Checking for column 
        for  k in range (c):
            l=[]
            i,j=0,k
            while (i<r and j<c):
                l.append(mat[i][j])
                i+=1
                j+=1
            l.sort()
            i,j,ind=0,k,0
            while (i<r and j<c ):
                mat[i][j]=l[ind]
                ind+=1
                i+=1
                j+=1
        # Checking for row
        for  k in range (1,r):
            l=[]
            i,j=k,0
            while (i<r and j<c):
                l.append(mat[i][j])
                i+=1
                j+=1
            l.sort()
            i,j,ind=k,0,0
            while (i<r and j<c ):
                mat[i][j]=l[ind]
                ind+=1
                i+=1
                j+=1
        
        return mat
                
        