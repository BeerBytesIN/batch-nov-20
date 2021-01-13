# Time Complexity : 0(N)
# Space Complexity : O(1)

'''
class Node:
    def __init__(self, val, k):
        self.right = None
        self.data = val
        self.left = None
        self.key = k
'''

# returns the inorder successor of the Node x in BST (rooted at 'root')
def inorderSuccessor(root, x):
    if root==None:
        return None
    if root.data>x.data:
        succ=inorderSuccessor(root.left,x)
        if succ is None:
            succ=root
    else:
        succ=inorderSuccessor(root.right,x)
    return succ
