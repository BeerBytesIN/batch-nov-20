# Time Complexity- O(NlogK).
# Space Complexity - O(K)

from queue import PriorityQueue
def merge(numbers):
    # code here
    # return merged list
    q=PriorityQueue()
    k=len(numbers)
    ans=[]
    for i in numbers:
        if i:
            q.put((i[0],0,i))
    while not q.empty():
        val,ind,lis=q.get()
        ans.append(val)
        ind+=1
        if ind<len(lis):
            q.put((lis[ind],ind,lis))
    return ans
        
        