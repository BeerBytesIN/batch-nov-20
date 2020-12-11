# Time Complexity- O(N)
# Space Complexity - O(N)  # For recursive stack

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> TreeNode:
        if len(nums)==0:
            return None
        def tree (nums,left,right):
            if left>right:
                return None
            mid=left+(right-left)//2
            root=TreeNode(nums[mid])
            root.left=tree(nums,left,mid-1)
            root.right=tree(nums,mid+1,right)
            return root
            
        return tree(nums,0,len(nums)-1)
        
        