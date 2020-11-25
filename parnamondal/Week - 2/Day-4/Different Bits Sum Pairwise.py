class Solution:
	# @param A : list of integers
	# @return an integer
	
	# Time Complexity - 0(32N)
	# Space Complexity - O(1)
	
	def cntBits(self, a):
	    #a=[int(bin(i)[2:]) for i in a]
	    s=0
	    m=10**9 + 7
	    for i in range (0,32):
	        c=0
	        for j in range (len(a)):
	            # 'i' left shift by 1
	            if a[j]&(1<<i):
	                c+=1
            s+=(2*c*(len(a)-c))
            s=s%m
        return int(s)