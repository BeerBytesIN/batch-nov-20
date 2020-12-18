# Time Complexity- O(N)
# Space Complexity - O(N)

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rightSideView(self, root: TreeNode) -> List[int]:
        maxi=[0]
        ans=[]
        def rightt(root,level,maxi):
            if maxi[0]<level:
                maxi[0]=level
                ans.append(root.val)
            if root.right:
                rightt(root.right,level+1,maxi)
            if root.left:
                rightt(root.left,level+1,maxi)
        if root==None:
            return []
        else:
            rightt(root,1,maxi)
            return ans
        