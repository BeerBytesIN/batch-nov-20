# Time Complexity - O(N)
# Space Complexity - O(N)

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: TreeNode) -> bool:
        if root is None:
            return True
        def find (root,l,r):
            if root is None:
                return True
            if l!= None and root.val<=l.val:
                return False
            if r and root.val>=r.val:
                return False
            return find(root.left,l,root) and find(root.right,root,r)

            
        return find(root,None,None)
        