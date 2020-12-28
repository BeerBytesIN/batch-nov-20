# Time Complexity- O(N)
# Space Complexity - O(N)  # for recursive stack

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def buildTree(self, inorder: List[int], postorder: List[int]) -> TreeNode:
        def search (inorder,start,end,value):
            for i in range (start,end+1):
                if inorder[i]==value:
                    return i
        def build (inorder,postorder,start,end):
            if start>end:
                return None
            tnode=TreeNode(postorder[build.post])
            build.post-=1
            if start == end:
                return tnode
            serc=search(inorder,start,end,tnode.val)
            tnode.right=build(inorder,postorder,serc+1,end)
            tnode.left=build(inorder,postorder,start,serc-1)
            return tnode
        build.post=len(postorder)-1
        root=build(inorder,postorder,0,len(inorder)-1)
        return root
        