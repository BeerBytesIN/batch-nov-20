# Time Complexity- O(N).
# Space Complexity - O(1)

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: ListNode) -> ListNode:
        fast,slow=head,head
        if fast==None or fast.next==None:
            return
        c=0
        while(fast and fast.next):
            slow=slow.next
            fast=fast.next.next
            if slow==fast:
                fast=head
                while fast!=slow:
                    fast=fast.next
                    slow=slow.next
                return fast
        return None
       