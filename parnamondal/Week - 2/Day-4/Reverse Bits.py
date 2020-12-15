class Solution:
    # @param A : unsigned integer
    # @return an unsigned integer
    
    	# Time Complexity - 0(1)
        # Space Complexity - O(1)
    
    def reverse(self, a):
        if a==0:
            return 0
        no=bin(a)[2:]
        f=len(no)
        h=32-f
        s='0'*h+no
        s=s[::-1]
        return int(s,2)
            
