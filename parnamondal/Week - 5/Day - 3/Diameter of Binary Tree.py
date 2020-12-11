# Time Complexity- O(N)
# Space Complexity - O(N)  # for recursive stack

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: TreeNode) -> int:
        self.ans=1
        def depth(root):
            if root is None:
                return 0
            l,h=depth(root.left),depth(root.right)
            self.ans=max(self.ans,1+l+h)
            return max(l,h)+1
        depth(root)
        return self.ans-1