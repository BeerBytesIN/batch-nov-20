# Time Complexity- O(N).
# Space Complexity - O(1)

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: ListNode) -> bool:
        if head==None:
            return False
        slow,fast=head,head.next
        while fast != slow:
            if fast==None or fast.next==None:
                return False
            slow=slow.next
            fast=fast.next.next
        return True
        
        