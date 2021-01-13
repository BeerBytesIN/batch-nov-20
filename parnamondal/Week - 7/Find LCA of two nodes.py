# Time Complexity - O(N)
# Space Complexity - O(N)

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root,p,q):
        if root is None:
            return None
        if root==p or root == q:
            return root
        l=self.lowestCommonAncestor( root.left,p,q)
        r=self.lowestCommonAncestor( root.right,p,q)
        if l!= None and r!=None:
            return root
        if l==None and r==None:
            return None
        return l if l!= None else r