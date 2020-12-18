# Time Complexity- O(N).
# Space Complexity - O(N)

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        
        '''# Recursive solution
        ans=[]
        def inorder(root):
            if root is None:
                return 
            if root.left:
                inorder(root.left)
            ans.append(root.val)
            if root.right:
                inorder (root.right)
        inorder (root)
        return ans
    '''
        # Non Recursive solution
        stack,ans=[],[]
        while (root or stack):
            if root:
                stack.append(root)
                root=root.left
            else:
                t=stack.pop()
                ans.append(t.val)
                root=t.right
        return ans
                
        
        
    
        