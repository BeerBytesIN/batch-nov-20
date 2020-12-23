# Time Complexity- O(N)
# Space Complexity - O(N) 

'''Write a function that given a BST, it will return the distance (number of edges) between 2 nodes.

For example, given this tree

         5
        / \
       3   6
      /    \
     2   4   7
    /         \
   1           8
The distance between 1 and 4 is 3: [1 -> 2 -> 3 -> 4]

The distance between 1 and 8 is 6: [1 -> 2 -> 3 -> 5 -> 6 -> 7 -> 8]

Find the lca of two nodes say x , then :

answer = depth(p)+depth(q)-2*depth(x)

'''

# Time Complexity - O(N)
# Space Complexity - O(N)

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root,p,q):
        if root is None:
            return None
        if root==p or root == q:
            return root
        l=self.lowestCommonAncestor( root.left,p,q)
        r=self.lowestCommonAncestor( root.right,p,q)
        if l!= None and r!=None:
            return root
        if l==None and r==None:
            return None
        return l if l!= None else r
    def depth (root):
        if root is None:
            return 0
        else:
            l=depth(root.left)
            r=depth(root.right)
            return max(l,r)+1 
    # Say 
    p,q = 1,4
    lca=lowestCommonAncestor(root,p,q)
    ans=depth(p)+depth(q)-2*depth(lca)
    print (ans)

