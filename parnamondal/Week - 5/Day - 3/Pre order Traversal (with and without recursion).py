# Time Complexity- O(N).
# Space Complexity - O(N)

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        
        # Recursive Solution
        '''        ans=[]
        def preorder(root):
            if root is None :
                return None
            ans.append(root.val)
            if root.left:
                preorder(root.left)
            if root.right:
                preorder (root.right)
            
        preorder(root)
        return ans'''
        
        # Non-Recursive Solution 
        ans=[]
        stack,ans=[],[]
        while (stack or root):
            if root:
                stack.append(root)
                ans.append(root.val)
                root=root.left
            else:
                t=stack.pop()
                root=t.right
        return ans
                
        