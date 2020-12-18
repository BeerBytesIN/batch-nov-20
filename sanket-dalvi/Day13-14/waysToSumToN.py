class Solution:
    def countWays(self, arr, m, n):
        nums = [1]+[0]*n
        for i in range(1,n+1):
            for j in range(len(arr)):
                if i >= arr[j]:
                    nums[i] += nums[i-arr[j]]
        return nums[-1]%1000000007

# Test
print(Solution().countWays([1,5,6], 3, 7))