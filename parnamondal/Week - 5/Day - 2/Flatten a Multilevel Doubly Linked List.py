# Time Complexity- O(N+M).
# Space Complexity - O(1)

"""
# Definition for a Node.
class Node:
    def __init__(self, val, prev, next, child):
        self.val = val
        self.prev = prev
        self.next = next
        self.child = child
"""

class Solution:
    def flatten(self, head: 'Node') -> 'Node':
        if head==None:
            return None
        temp=head
        he=Node(0)
        t,temp=he,[head]
        while(temp):
            j=temp.pop()
            if j.next :
                temp.append(j.next)
            if j.child:
                temp.append(j.child)
            t.next=j
            j.prev=t
            j.child=None
            t=j
        he.next.prev=None
        return he.next
            
            
        
        