#User function Template for python3
# Time Complexity - O(N)
# Space Complexity - O(N)
'''
class Node:
    """ Class Node """
    def __init__(self, value):
        self.left = None
        self.data = value
        self.right = None
'''

#Your task is to complete this function
#function should return head to the DLL
def bToDLL(root):
    # do Code here
    l=[]
    def inorder(root):
        if root is None:
            return
        inorder(root.left)
        l.append(root.data)
        inorder(root.right)
        return l
    l=inorder(root)
    prev,head=None,None
    for i in range (len(l)):
        nn=Node(l[i])
        if head == None:
            head=prev=nn
            head.left=None
            prev.right=None
        else:
            prev.right=nn
            nn.left=prev
            prev=nn
            prev.right=None
    return head

            
