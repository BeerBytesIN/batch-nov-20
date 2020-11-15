#User function Template for python3
class Solution:

	# Function to find maximum
	# product subarray
	def maxProduct(self,arr, n):
        max_ending = min_ending = arr[0]
        max_so_far = arr[0]
        for i in range(1,len(arr)):
            temp = max_ending
            max_ending = max(arr[i], max(arr[i]*temp, arr[i]*min_ending))
            min_ending = min(arr[i], min(arr[i]*temp, arr[i]*min_ending))
            max_so_far = max(max_ending, max_so_far)
        return max_so_far     

#{ 
#  Driver Code Starts
#Initial Template for Python 3



if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.maxProduct(arr, n)
        print(ans)
        tc -= 1

# } Driver Code Ends
