# Time Complexity- O(N).
# Space Complexity - O(K)

from heapq import heapify,heappush,heappop
def kthSmallest(arr, l, r, k):
    '''
    arr : given array
    l : starting index of the array i.e 0
    r : ending index of the array i.e size-1
    k : find kth smallest element and return using this function
    '''
    heap=[]
    heapify(arr)
    c=0
    while (c<k):
        c+=1
        ele=heappop(arr)
    return ele
