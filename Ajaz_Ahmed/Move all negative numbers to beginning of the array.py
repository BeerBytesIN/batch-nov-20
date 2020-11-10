#  pythonic approach
arr = [-12, 11, -13, -5, 6, -7, 5, -3, -6]
print(sorted(arr))

# O(1) time and space compexity

# Second approach

def moveNegEle(arr):
    for ele in arr:
        if ele > 0:
            arr.remove(ele)
            arr.append(ele)
            
arr = [-12, 11, -13, -5, 6, -7, 5, -3, -6]            
moveNegEle(arr)            
print((arr))

# O(n) time complexity
# O(1) space complexity
