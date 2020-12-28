# Time Complexity- O(N).
# Space Complexity - O(N)

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def postorderTraversal(self, root: TreeNode) -> List[int]:
        
        # Recursive Solution
        '''ans=[]
        def posorder(root):
            if root is None:
                return None
            if root.left:
                posorder(root.left)
            if root.right:
                posorder(root.right)
            ans.append(root.val)
        posorder(root)
        return ans'''
    
        # Non Recursive Solution
        ans=[]
        stack,ans=[],[]
        while (stack or root):
            if root:
                stack.append(root)
                ans.append(root.val)
                root=root.right
            else:
                t=stack.pop()
                root=t.left
        return ans[::-1]
                
                
                
        
        