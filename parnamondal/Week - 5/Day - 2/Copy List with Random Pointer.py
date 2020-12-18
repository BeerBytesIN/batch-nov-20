# Time Complexity- O(N).
# Space Complexity - O(1)

"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, head: 'Node') -> 'Node':
        temp=head
        def insert(head):
            if head==None:
                return None
            cur=head
            r=Node(cur.val)
            later=cur.next
            cur.next=r
            r.next=later
            insert(later)
        def rand(head):
            if head==None:
                return None
            t=head
            if t.random!=None:
                temp=t.random
                t.next.random=temp.next
            rand(t.next.next)
        def getlist(curr):
            if curr==None:
                return
            ret=curr.next
            curr.next=ret.next
            ret.next=getlist(ret.next)
            return ret
        insert(temp)
        rand(temp)
        t=getlist(temp)
        return t
    
        