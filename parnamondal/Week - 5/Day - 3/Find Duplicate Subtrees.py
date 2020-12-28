# Time Complexity- O(N)
# Space Complexity - O(N)  # for recursive stack

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import defaultdict
class Solution:
    def findDuplicateSubtrees(self, root: TreeNode) -> List[TreeNode]:
        mp=defaultdict(int)
        ans=[]
        def duplicate(root):
            if not root:
                return '*'
            temp=str(root.val)+" "+duplicate(root.left)+" "+duplicate(root.right)
            
            if temp not in mp:
                mp[temp]=1
            else:
                mp[temp]+=1
            if mp[temp]==2:
                ans.append(root)
            return temp
        duplicate(root)
        return ans
        
        