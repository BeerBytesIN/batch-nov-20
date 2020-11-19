# Time Complexity - O(N)

# Space Complexity - O(1)

#User function Template for python3
class Solution:

	# Function to find maximum
	# product subarray
	def maxProduct(self,arr, n):
		# code here
		ok,mini,maxi=arr[0],arr[0],arr[0]
		for i in range (1,n):
		    if arr[i]<0:
		        mini,maxi=maxi,mini
            maxi=max(arr[i],arr[i]*maxi)
            mini=min(arr[i],arr[i]*mini)
            ok=max(ok,maxi)
        return ok
		      