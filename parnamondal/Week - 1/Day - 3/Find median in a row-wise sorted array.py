#User function Template for python3

# Time Complexity - O(32*r*log(c))
# Space Complexity - O(1)

class Solution:
    def median(self, matrix, r, c):
    	#code here 
    	mi,ma=matrix[0][0],0
    	for i in range (r):
    	    if matrix[i][0]<mi:
    	        mi=matrix[i][0]
    	    if matrix[i][c-1]>ma:
    	        ma=matrix[i][c-1]
    	total=(r*c+1)//2
    	while (mi<ma):
    	    mid=mi+(ma-mi)//2
    	    place=0
    	    for i in range (r):
    	        for j in range (c):
    	            if matrix[i][j]<=mid:
    	                place+=1
            if place<total:
                mi=mid+1
            else:
                ma=mid
        return mi
        