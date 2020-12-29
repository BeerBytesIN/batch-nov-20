# Definition for a binary tree node.

# Time Complexity : O(N)
# Space Complexity : O(N)

# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def flatten(self, root: TreeNode) -> None:
        stack=[root]
        hea=root
        curr=None
        if not root:
            return root
        while (stack):
            rt=stack.pop()
            prev=curr
            curr=rt
            if prev:
                prev.right,prev.left=curr,None
            if rt.right:
                stack.append(rt.right)
            if rt.left:
                stack.append(rt.left)
        return hea
        
        
        
        
        