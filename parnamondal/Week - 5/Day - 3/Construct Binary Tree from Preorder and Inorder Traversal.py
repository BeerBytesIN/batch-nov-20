# Time Complexity- O(N)
# Space Complexity - O(N)  # for recursive stack

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def buildTree(self, preorder: List[int], inorder: List[int]) -> TreeNode:
        def search (inorder,start,end,value):
            for i in range (start,end+1):
                if inorder[i]==value:
                    return i
        def build (preorder,inorder,start,endi):
            if start>endi:
                return None
            tnode=TreeNode(preorder[build.preind])
            build.preind+=1
            if start==endi:
                return tnode
            sear=search(inorder,start,endi,tnode.val)
            tnode.left=build(preorder,inorder,start,sear-1)
            tnode.right=build(preorder,inorder,sear+1,endi)
            return tnode
        build.preind=0
        root=build(preorder,inorder,0,len(inorder)-1)
        return root
        