from itertools import accumulate
from operator import add

def maxLen(n, arr):
    sumArr = list(accumulate(arr, add))
    return sumArr


# Test
arr = [15, -2, 2, -8, 1, 7, 10, 23]
print(maxLen(len(arr), arr))
