class Solution:
	# @param A : list of integers
	# @return an integer
	
	# Time Complexity - 0(N)
    # Space Complexity - O(1)

	def findMinXor(self, A):
	    n=len(A)
	    A.sort()
	    
	    m=10**10
	    #t=A[0]
	    for i in range (n-1):
	        t=A[i]^A[i+1]
	        if t<m:
	            m=t
	        
        return m	           
	    
