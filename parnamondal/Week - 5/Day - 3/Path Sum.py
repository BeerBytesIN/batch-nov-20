# Time Complexity- O(N)
# Space Complexity - O(N)  # for recursive stack

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: TreeNode, sum: int) -> bool:
        def helper (root,total):
            if root:
                if not root.left and not root.right:
                    return total+root.val == sum
                return helper(root.left,total+root.val) or helper(root.right,total+root.val)
        return helper(root,0)