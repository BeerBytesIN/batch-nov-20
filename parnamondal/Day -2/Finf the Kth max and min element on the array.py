# Time Complexity - O(NlogN)
# Space Complexity - O(1)

def kthSmallest(a, l, r, k):
    '''
    arr : given array
    l : starting index of the array i.e 0
    r : ending index of the array i.e size-1
    k : find kth smallest element and return using this function
    '''
    a.sort()
    return a[k-1]