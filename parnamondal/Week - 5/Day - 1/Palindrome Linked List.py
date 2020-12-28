# Time Complexity- O(N).
# Space Complexity - O(1)

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: ListNode) -> bool:
        if head is None:
            return True
        def reverse(head):
            prev=None
            while (head):
                th=head.next
                head.next=prev
                prev=head
                head=th
            return prev
        fast,slow=head,head
        while(fast !=None and fast.next!=None ):
            slow=slow.next
            fast=fast.next.next
        fast=head
        slow=reverse(slow)
        while(slow!=None):
            if fast.val!=slow.val:
                return False
            slow=slow.next
            fast=fast.next
        return True

        
# Time Complexity- O(N).
# Space Complexity - O(N)

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
'''class Solution:
    def isPalindrome(self, head: ListNode) -> bool:
        s=[]
        t=head
        while (t!=None):
            s.append(t.val)
            t=t.next
        if s==s[::-1]:
            return True
        else:
            return False'''