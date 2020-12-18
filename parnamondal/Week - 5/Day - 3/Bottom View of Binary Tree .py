#User function Template for python3

# Time Complexity- O(N)
# Space Complexity - O(N)

'''
# Node Class:
class Node:
    def _init_(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

def bottomView(root):
    '''
    :param root: root of the binary tree
    :return: list containing the bottom view from left to right
    '''
    # code here
    q=[]
    mp={}
    q.append([root,0])
    while q:
        t=q.pop(0)
        roo,key=t[0],t[1]
        mp[key]=roo.data
        if roo.left:
            q.append([roo.left,key-1])
        if roo.right:
            q.append([roo.right,key+1])
    #print (mp)
    res=[]
    for i in sorted(mp):
        res.append(mp[i])
    return res
