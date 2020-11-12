# User function Template for python3


class Solution:

    # Function to find maximum
    # product subarray
    def maxProduct(self, arr, n):
        if not arr:
            return
        max_so_far = arr[0]
        min_so_far = arr[0]
        maxi = arr[0]
        for i in arr[1:]:
            if i < 0:
                max_so_far, min_so_far = min_so_far, max_so_far
            max_so_far = max(i, max_so_far*i)
            min_so_far = min(i, min_so_far*i)
            maxi = max(max_so_far, maxi)
        return maxi


# Test
arr = [6, -3, -10, 0, 2]
print(Solution().maxProduct(arr, len(arr)))
