def maxSubArraySum(a,size):
    max_ending_here = 0
    max_so_far = float("-inf")
    for i in a:
        max_ending_here = max(max_ending_here+i, i)
        max_so_far = max(max_so_far, max_ending_here)
    return max_so_far



arr = [-1,-2,-3,-4]
print(maxSubArraySum(arr, len(arr)))