# Time Complexity - O(N)
# Space Complexity - O(1)

class Solution:
    
	#return 0
    def merge(self, a1, a2, m, n): 
        def nextgap(length):
	        #if length!=0:
	        if length<=1:
	            return 0
	        return (length//2) + (length%2) 
    	gap=nextgap(m+n)
    	while (gap>0):
    		i=0
    		
    		while (i+gap<m):
    			if a1[i]>a1[i+gap]:
    				a1[i],a1[i+gap]=a1[i+gap],a1[i]
    			i+=1
    		j=gap-m if gap>m else 0
    		while i<m and j <n:
    			if a1[i]>a2[j]:
    				a1[i],a2[j]=a2[j],a1[i]
    			i+=1 
    			j+=1
    		if j<n:
    		    j=0
        		while j+gap<n:
        			if a2[j]>a2[j+gap]:
        				a2[j],a2[j+gap]=a2[j+gap],a2[j]
        			j+=1 
    		gap=nextgap(gap)
    	return a1,a2
