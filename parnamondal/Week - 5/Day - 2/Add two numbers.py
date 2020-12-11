# Time Complexity- O(N).
# Space Complexity - O(N)

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        carry,su=0,0
        if not l1:
            return l2
        if not l2:
            return l1
        hea=ListNode(-1)
        cur=hea
        h1,h2=l1,l2
        while h1 or h2:
            x=h1.val if h1!=None else 0
            y=h2.val if h2!=None else 0
            su=carry+x+y
            carry=su//10
            cur.next= ListNode(su%10)
            cur=cur.next
            if h1!=None:
                h1=h1.next
            if h2!=None:
                h2=h2.next
        if carry>0:
            cur.next=ListNode(carry)
        return hea.next
           