# Time Complexity- O(N).
# Space Complexity - O(1)

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseKGroup(self, head: ListNode, k: int) -> ListNode:
        def count(head):
            t=head
            p=0
            while (t):
                p+=1
                t=t.next
            return p
        def song (head,k,total):    
            prev,nexti=None,None
            curr=head
            c=0
            while curr and c<k:
                total-=1
                nexti=curr.next
                curr.next=prev
                prev=curr
                curr=nexti
                c+=1
            
            if total<k:
                head.next=curr
                return prev
            if nexti is not None:
                head.next=song(nexti,k,total)
            return prev 
        total=count(head)
        if total<k:
            #print (total)
            return head
        else:
            temp=song(head,k,total)
        
            return temp
