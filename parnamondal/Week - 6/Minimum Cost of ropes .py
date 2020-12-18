# Time Complexity - O(N)
# Space Complexity - O(1)
from heapq import heapify,heappush,heappop
def minCost(a,n) :
    '''
    use heapq module , imported already by driver code.
    :param a: given array
    :param n: size of array
    :return: Integer
    '''
    # code here
    heapify(a)
    ans=0
    while len(a)>=2:
        e1,e2=heappop(a),heappop(a)
        s=e1+e2
        ans+=s
        heappush(a,s)
    return ans
        