# Time Complexity- O(N+M).
# Space Complexity - O(1)

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> ListNode:
        if headA is None or headB is None:
            return None
        a,b=headA,headB
        while (a!=b):
            a=headB if a==None else a.next
            b=headA if b==None else b.next
        return a
        