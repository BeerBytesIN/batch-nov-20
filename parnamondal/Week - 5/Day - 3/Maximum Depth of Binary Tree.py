# Time Complexity- O(N)
# Space Complexity - O(N) # for recursive stack

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: TreeNode) -> int:
        def height(root):
            if root is None:
                return 0
            l,h=height(root.left),height(root.right)
            return max(l,h)+1
        return height(root)
        
        