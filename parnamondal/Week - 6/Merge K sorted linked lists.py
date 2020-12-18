# Time Complexity - O(NlogK)
# Space Complexity - O(K)
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
from queue import PriorityQueue

class Solution:
    def mergeKLists(self, lists: List[ListNode]) -> ListNode:
        if not lists:
            return None
        head = prev = None
        q = PriorityQueue()
        for l in lists:
            if l:
                q.put((l.val, l))
        while not q.empty():
            val, node = q.get()
            if prev:
                prev.next = node
                prev = prev.next
                node = node.next
                if node:
                    q.put((node.val, node))
            else:
                head = prev = node
                node = node.next
                if node:
                    q.put((node.val, node))
                
        return head