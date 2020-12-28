#User function Template for python3

# Time Complexity- O(N).
# Space Complexity - O(N)

'''
# Node Class:
class Node:
    def _init_(self,val):
        self.data = val
        self.left = None
        self.right = None
'''
def topView(root):
    '''
    :param root: root of the binary tree
    :return: None, newline is provided by driver code
    '''
    # code here
    q=[]
    q.append([root,0])
    mp={}
    while q:
        t=q.pop(0)
        roo,key=t[0],t[1]
        if key not in mp:
            mp[key]=roo.data
            #ans.append(roo.data)
        if roo.left:
            q.append([roo.left,key-1])
        if roo.right:
            q.append([roo.right,key+1])
    for i in sorted(mp):
        print (mp[i],end=" ")
    
        