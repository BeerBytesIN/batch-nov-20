# Time Complexity : O(NlogN)
# Space Complexity : O(N)

class node:
    def __init__ (self,data):
        self.data=data
        self.left=None
        
        self.right=None
        
def constructTree(pre, size):
    inorder=pre[:]
    inorder.sort()
    
    def build(pre,inorder,st,end):
        if st>end:
            return None
        root=node(pre[build.prek])
        build.prek+=1
        if st==end:
            return root
        inde=inorder.index(root.data)
        root.left=build(pre,inorder,st,inde-1)
        root.right=build(pre,inorder,inde+1,end)
        return root
    build.prek=0
    return build(pre,inorder,0,size-1)