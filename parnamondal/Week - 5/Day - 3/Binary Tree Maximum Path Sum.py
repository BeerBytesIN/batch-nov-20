# Time Complexity- O(N)
# Space Complexity - O(N)  # for recursive stack

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxPathSum(self, root: TreeNode) -> int:
        self.ans=float("-inf")
        if root is None:
            return 0
        def depth(root):
            if root is None:
                return 0
            l,r=depth(root.left),depth(root.right)
            self.ans=max(self.ans,l+r+root.val)
            return max(0,root.val+max(l,r))
        depth(root)
        return self.ans
        