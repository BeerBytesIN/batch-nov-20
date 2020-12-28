# Time Complexity- O(N).
# Space Complexity - O(1)

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        if head==None:
            return head
        if  head.next == None :
            head=None
            return head
        temp,mn=head,head
        c,co=0,0
        while (temp!=None):
            c+=1
                
            temp=temp.next
        while (c!=n):
            prev=mn
            mn=mn.next
            c-=1
        if mn==head:
            head=head.next
        else:
            prev.next=mn.next
            mn.next=None
        return head
            
            
        