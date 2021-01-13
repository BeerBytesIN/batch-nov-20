# Time Complexity : O(N*N)
# Space Complexity : O(N)

def height(root):
    if root is None:
        return 0
    return height(root.left)+height(root.right)+1
def isbst(root,lef,righ):
    if root is None:
        return True
    if root.data>=lef and root.data<=righ:
        return isbst(root.left,lef,root.data-1) and isbst(root.right,root.data+1,righ)
    else:
        return False
def largestBst(root):
    if root is None:
        return 0
    if isbst(root,float('-inf'),float('inf')):
        return height(root)
    le=largestBst(root.left)
    re=largestBst(root.right)
    return max(le,re)
 